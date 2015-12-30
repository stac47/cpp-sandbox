#include <iostream>

struct A
{
    int a_;
};

struct B : public A
{
    int b_;
};

class VirtualA
{
    int a_;
public:
    virtual void f() = 0;
};

class VirtualB : public VirtualA
{
    int b_;
public:
    void f() {}
};

int main(int argc, const char* argv[])
{
    std::cout << "sizeof(int)=" << sizeof(int) << std::endl;
    std::cout << "sizeof(A)=" << sizeof(A) << std::endl;
    std::cout << "sizeof(B)=" << sizeof(B) << std::endl;
    std::cout << "sizeof(VirtualA)=" << sizeof(VirtualA) << std::endl;
    std::cout << "sizeof(VirtualB)=" << sizeof(VirtualB) << std::endl;
}
