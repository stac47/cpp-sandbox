#include <iostream>
#include <typeinfo>

class A
{
public:
    int x;
};

int main(int argc, const char *argv[])
{
    A a;
    std::cout << typeid(a).name() << std::endl;
    return 0;
}
