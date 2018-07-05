#include <stdexcept>
#include <iostream>

class A {
public:
    A()
    {
        throw std::runtime_error("Expected error");
    }

    void print() const
    {
        std::cout << this << std::endl;
    }
};

const A& GetA()
{
    static const A a;
    return a;
}

int main(int argc, const char *argv[])
{
    try
    {
        GetA().print();
    }
    catch (const std::runtime_error& ex)
    {
        std::cout << "This is expected error. What will happen in the next call ?"
                  << std::endl;
    }
    try
    {
        GetA().print();
    }
    catch (const std::runtime_error& ex)
    {
        std::cout << "A not instanciated" << std::endl;
    }
    return 0;
}
