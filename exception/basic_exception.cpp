#include <iostream>

class A
{
public:
    ~A()
    {
        std::cout << "A dtor" <<std::endl;
    }
};

class B : public A
{
public:
    ~B()
    {
        std::cout << "B dtor" <<std::endl;
    }
};

int main(int argc, const char *argv[])
{
    try
    {
        throw B();
    }
    catch(const A& e)
    {
        std::cout << "Caught" << std::endl;
    }
    return 0;
}
