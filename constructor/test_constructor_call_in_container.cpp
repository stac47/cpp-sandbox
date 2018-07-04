#include <vector>
#include <iostream>

#include "valgrind/callgrind.h"

template <typename T, typename A = std::allocator<T>> class DefaultInitializationAllocator : public A
{
private:
	typedef std::allocator_traits<A> AllocatorTraits_t;

public:
	template <typename U> struct rebind
	{
		using other = DefaultInitializationAllocator<U, typename AllocatorTraits_t::template rebind_alloc<U>>;
	};

	using A::A;

	template <typename U> void construct(U* aPointer) noexcept(std::is_nothrow_default_constructible<U>::value)
	{
		std::cout << "Calling ::new" << std::endl;
		::new(static_cast<void*>(aPointer)) U;
	}

	template <typename U, typename...Args> void construct(U* aPointer, Args&&... args)
	{
		std::cout << "Calling AllocatorTraits_t::construct" << std::endl;
		AllocatorTraits_t::construct(static_cast<A&>(*this), aPointer, std::forward<Args>(args)...);
	}
};

class Object
{
public:
    Object()
      : _value(0)
    {
        std::cout << "Object()" << std::endl;
    }

    explicit Object(int value)
      : _value(value)
    {
        std::cout << "Object(int value)" << std::endl;
    }

    ~Object()
    {
        std::cout << "~Object()" <<std::endl;
    }

private:
    int _value;
};

int main(int argc, const char *argv[])
{
	CALLGRIND_START_INSTRUMENTATION;
    {
        std::cout << "Container = std::vector" << std::endl;
        std::vector<Object> v;
        std::cout << "Capacity=" << v.capacity() << ", "
                  << "Size=" << v.size() << std::endl;
        std::cout << "Reserving space" << std::endl;
        v.reserve(10);
        std::cout << "Resize" << std::endl;
        v.resize(9);
    }
	CALLGRIND_DUMP_STATS;

    {
        std::cout << "Container = std::vector with custom allocator" << std::endl;
        std::vector<Object, DefaultInitializationAllocator<Object>> v;
        std::cout << "Capacity=" << v.capacity() << ", "
                  << "Size=" << v.size() << std::endl;
        std::cout << "Reserving space" << std::endl;
        v.reserve(10);
        std::cout << "Resize" << std::endl;
        v.resize(9);
    }

    {
        std::cout << "Container = raw array [new/delete]" << std::endl;
        Object* aArray = new Object[10];
        delete[] aArray;
    }

    {
        std::cout << "Container = raw array [malloc/free]" << std::endl;
        Object* aArray = static_cast<Object*>(malloc(10*sizeof(Object)));
        free(aArray);
    }
    CALLGRIND_STOP_INSTRUMENTATION;

    return 0;
}
