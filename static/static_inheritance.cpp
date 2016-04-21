#include <iostream>

struct A
{
    static int Value;
    static void StaticFunc()
    {
        std::cout << "A::StaticFunc" << std::endl;
    }
};

int A::Value = 1;

struct B : public A
{
    static int Value;
    static void StaticFunc()
    {
        std::cout << "B::StaticFunc" << std::endl;
    }
};

int B::Value = 2;

struct C : public B
{};

int main(int argc, const char *argv[])
{
    A::StaticFunc();
    B::StaticFunc();
    C::StaticFunc();

    std::cout << A::Value << std::endl;
    std::cout << B::Value << std::endl;
    std::cout << C::Value << std::endl;

    A::Value = 3;
    std::cout << A::Value << std::endl;
    std::cout << B::Value << std::endl;
    std::cout << C::Value << std::endl;

    B::Value = 4;
    std::cout << A::Value << std::endl;
    std::cout << B::Value << std::endl;
    std::cout << C::Value << std::endl;

    C::Value = 5;
    std::cout << A::Value << std::endl;
    std::cout << B::Value << std::endl;
    std::cout << C::Value << std::endl;
    return 0;
}
