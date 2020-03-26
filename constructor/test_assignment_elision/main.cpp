#include <iostream>
#include <memory>
#include <iterator>
#include <limits>
#include <cstring>

template <class T>
struct relative_address_iterator {
    typedef T value;
    typedef T *pointer;
    typedef const T *const_pointer;
    typedef T &reference;
    typedef const T &const_reference;

    typedef T value_type;
    typedef ptrdiff_t difference_type;
    typedef std::forward_iterator_tag iterator_category;


    off_t d;
    static constexpr off_t kEmptyPointer = std::numeric_limits<off_t>::min();

    /** Constructs the object from a pointer.
     */
    relative_address_iterator(pointer t)
    {
        if (t)
        {
            d = (char *)t - (char *)this;
        }
        else
        {
            d = kEmptyPointer;
        }
    }

    /**  Copy constructor.
     */
    template<typename U>
    relative_address_iterator(const relative_address_iterator &r)
    {
        if (r.d != kEmptyPointer)
        {
            d = (char *)&r - (char *)this + r.d;
        }
        else
        {
            d = kEmptyPointer;
        }
    }

    template<typename U>
    relative_address_iterator& operator=(const relative_address_iterator &r)
    {
        if (r.d != kEmptyPointer)
        {
            d = (char *)&r - (char *)this + r.d;
        }
        else
        {
            d = kEmptyPointer;
        }
        return *this;
    }

    /** Initializes the pointee with the given value.
     */
    void setVal(const_reference value) { *(pointer)((char *)this + d) = value; }

    /** Dereferences the object.
     */
    operator pointer()
    {
        if (d == kEmptyPointer) return nullptr;
        return ((pointer)((char *)this + d));
    }

    /** Preincrement operator.
     */
    relative_address_iterator &operator++()
    {
        d += sizeof(value);
        return (*this);
    }

    reference operator*()
    {
        return (*(pointer)((char *)this + d));
    }

};

template<typename T>
struct Base {
    using node_t = relative_address_iterator<T>;
    node_t it;
    Base(): it(0) {}
};

template<typename T>
struct Child : public Base<T> {
    using node_t = typename Base<T>::node_t;
    using _Base = Base<T>;
    Child(): _Base()
    {
        this->it = this->create();
    }
    node_t create()
    {
        T* t = new T;
        return t;
    }
};

int main(int argc, const char *argv[])
{
    auto c = new Child<char>;
    std::cout << *(c->it) << std::endl;
    delete c;
    return 0;
}

