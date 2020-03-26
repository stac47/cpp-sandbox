#include <memory>

template<typename T>
struct ref {
    typedef T value_type;
    typedef T* pointer;
    typedef T& reference;
    typedef ptrdiff_t difference_type;
    typedef std::random_access_iterator_tag iterator_category;

    int d;

    explicit ref(): d(-1) {}
    ref(const ref& other): d(other.d) {}
    ref& operator=(const ref& rhs) {
        if (rhs.d == -1)
        {
            d = -1;
        }
        else
        {
            d = reinterpret_cast<char*>(&rhs) - reinterpret_cast<char*>(this) + rhs.d;
        }
        return *this;
    }
    operator pointer() {
        if (d == -1) {
            return 0;
        }
        else
        {
            return reinterpret_cast<pointer>(this + d);
        }
    }
    ref& operator++() {
        d += sizeof(value_type);
        return *this;
    }
    void swap(ref& other) {
        std::swap(d, other.d);
    }
};

template<typename T>
void swap(ref<T>& lhs, ref<T>& rhs) {
    lhs.swap(rhs);
}

int main(int, const char *[])
{
    ref<char> r;
    std::uninitialized_fill_n(r, 10, 'a');
    return 0;
}
