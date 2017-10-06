#include <iostream>

class A
{
public:
    A()
    {
        std::cout << "Default constructor" << std::endl;
    }

    // copy semantic
    A(const A& a)
    {
        std::cout << "Copy constructor" << std::endl;
    }

    A& operator=(const A& a)
    {
        std::cout << "Copy assignment" << std::endl;
        return *this;
    }

    // move semantic
    A(const A&& a)
    {
        std::cout << "Move constructor" << std::endl;
    }

    A& operator=(const A&& a)
    {
        std::cout << "Move assignment" << std::endl;
        return *this;
    }
};

A MakeA()
{
    return A();
}

void FunctionMove(A&& a)
{
    std::cout << "Function Move" << std::endl;
}

int main(int argc, const char *argv[])
{
    const auto a = A();
    A b;
    b = a;
    A c(a);
    A d(MakeA());
    b = MakeA();
    A e(std::move(a));
    // FunctionMove(e); Not an rvalue
    FunctionMove(std::move(e));
    return 0;
}
