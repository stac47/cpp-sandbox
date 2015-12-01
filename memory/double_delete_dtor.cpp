#include <iostream>

class A
{
public:
    ~A()
    {
        std::cout << "In A destructor" << std::endl;
        delete this;
    }
};

int main(int argc, const char * argv[])
{
    A a;
};
