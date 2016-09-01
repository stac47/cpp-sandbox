#include <iostream>
#include <string>

class A {};

struct Container
{
    const A& _ref;

    Container(const A& a)
      : _ref(a)
    {}
};

int main(int argc, const char *argv[])
{
    A a;
    Container c(a);
    std::cout << &(c._ref) << std::endl;
    return 0;
}


