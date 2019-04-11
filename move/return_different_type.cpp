#include <utility>
#include <iostream>

struct A
{
    int result;
    A(): result(0) {}
    A(int iResult): result(iResult) {}
};

template<typename T>
class Wrapper
{
    T wrapped_;
public:
    Wrapper()
    {
        std::cout << "Wrapper()" << std::endl;
    }

    Wrapper(const Wrapper<T>& iOther): wrapped_(iOther.wrapped_)
    {

        std::cout << "Wrapper(const Wrapper<T>&)" << std::endl;
    }

    Wrapper<T>& operator=(const Wrapper<T>& iRhs)
    {
        wrapped_ = iRhs.wrapped_;
        std::cout << "Wrapper<T>& operator=(const Wrapper<T>&)" << std::endl;
        return *this;
    }

    Wrapper(Wrapper<T>&& iSource): wrapped_(std::move(iSource.wrapped_))
    {
        std::cout << "Wrapper(Wrapper<T>&&)" << std::endl;
    }

    Wrapper(const T& iSource): wrapped_(iSource)
    {
        std::cout << "Wrapper(const T&)" << std::endl;
    }

    Wrapper(const T&& iSource)
    {
        wrapped_ = std::move(iSource);
        std::cout << "Wrapper(T&&)" << std::endl;
    }

    T unwrap() const
    {
        return wrapped_;
    }
};

template<typename T>
Wrapper<T> build(bool iBool)
{
    T ret;
    if (iBool)
    {
        return A(666);
    }
    /* return std::move(ret); */
    return ret;
}

int main(int, const char *[])
{
    A a = A(47);
    std::cout << "=======================" << std::endl;
    Wrapper<A> w0(a);
    std::cout << "=======================" << std::endl;
    Wrapper<A> w1(A(42));
    std::cout << "=======================" << std::endl;
    auto w2 = build<A>(false);
    std::cout << "=======================" << std::endl;
    std::cout << "Result: " << w2.unwrap().result << std::endl;

    return 0;
}
