#include <memory>
#include <iostream>

class A
{
    int _value;
    friend class Displayer;
    friend class Toto;
public:
    A() : _value(2) {}
};

class Displayer
{
public:
    void display(const std::shared_ptr<A>& iAptr)
    {
        std::cout << iAptr->_value << std::endl;
    }
};

int main(int argc, const char * argv[])
{
    auto p = std::make_shared<A>();
    Displayer displayer {};
    displayer.display(p);
    return 0;
}
