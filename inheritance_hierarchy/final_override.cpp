#include <iostream>

class A
{
public:
    virtual void f()
    {
        std::cout << "From A" << std::endl;
    }
};

class B : public A
{
public:
    void f() override final
    {
        std::cout << "From B" << std::endl;
    }
};

class C : public B
{
public:
    void f() override {}
};

int main(int argc, const char *argv[])
{
    A* o = new B;
    o->f();
    delete o;
    return 0;
}
