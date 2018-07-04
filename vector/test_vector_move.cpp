#include <cstring>
#include <utility>
#include <iostream>
#include <vector>
#include <memory>
#include <string>

template <int N>
class X {
public:
    X() : buffer_(std::make_unique<char[]>(N))
    {
        /* std::cout << "X:X()" << std::endl; */
    }
    X(const X& other) : buffer_(std::make_unique<char[]>(N))
    {
        std::memcpy(buffer_.get(), other.buffer_.get(), N);
        /* std::cout << "X:X(const X&)" << std::endl; */
    }
    X& operator=(const X& rhs)
    {
        buffer_.reset(new char[N]);
        std::memcpy(buffer_.get(), rhs.buffer_.get(), N);
        /* std::cout << "X:operator=(const X&)" << std::endl; */
        return *this;
    }

    X(X&& other) = default;
    X& operator=(X&& rhs) = default;

    /* X(X&& other) //noexcept */
    /*   : buffer_(std::move(other.buffer_)) */
    /* { */
    /*     /1* std::cout << "X:X(X&&)" << std::endl; *1/ */
    /* } */
    /* X& operator=(X&& rhs) //noexcept */
    /* /1* X& operator=(X&& rhs) // noexcept *1/ */
    /* { */
    /*     buffer_ = std::move(rhs.buffer_); */
    /*     /1* std::cout << "X:operator=(X&&)" << std::endl; *1/ */
    /*     return *this; */
    /* } */
/*     void modify() {} // non const */
private:
    std::unique_ptr<char[]> buffer_;
};

/* X f1(X x) {x.modify(); return x;} */
/* X f2(X& x) {x.modify(); return x;} */
/* X f3(const X& x) {x.modify(); return x;} */
/* X f4(X&& x) {x.modify(); return x;} */
/* X f5(X&& x) {x.modify(); return std::move(x);} */

constexpr int kMax = 300'000;

int main(int argc, const char *argv[])
{
    /* std::cout << "By value" << std::endl; */
    /* f1(X()); */
    /* std::cout << "By rvalue reference" << std::endl; */
    /* f4(X()); */
    /* std::cout << "By rvalue reference + return move" << std::endl; */
    /* f5(X()); */
    {
        //std::cout << "std::vector<>::push_back" << std::endl;
        std::vector<X<1000>> v;
        v.reserve(kMax);
        for (int i = 0; i < kMax; ++i)
        {
            //v.push_back(X());
            v.emplace_back();
        }
        //v.push_back(X());
        v.emplace_back();
        std::cout << v.size() << std::endl;
    }
    /* { */
    /*     std::cout << "std::vector<>::emplace_back" << std::endl; */
    /*     std::vector<X> v; */
    /*     v.reserve(4); */
    /*     for (int i = 0; i < 5; ++i) */
    /*     { */
    /*         std::cout << "----" << i << "----" << std::endl; */
    /*         v.emplace_back(); */
    /*     } */
    /* } */
    return 0;
}
