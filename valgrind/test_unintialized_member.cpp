#include <iostream>

struct A
{
    A():i(42), i8(0) {}
    int i;
    uint8_t i8;

    bool test() const
    {
        return i8 == 42;
    }
};

int main(int argc, const char *argv[])
{
    A a;
    if (a.test())
    {
        std::cout << "TRUE" << std::endl;
    }
    else
    {
        std::cout << "FALSE" << std::endl;
    }

    return 0;
}
