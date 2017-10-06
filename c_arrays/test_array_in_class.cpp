#include <iostream>
#include <ios>

class A {
    char _str[10];
public:
    A()
    {
        _str[0] = '\0';
    }

    bool empty()
    {
        return _str[0] == '\0';
    }
};

int main(int argc, const char *argv[])
{
    A a;
    std::cout << std::boolalpha << a.empty() << std::endl;
    return 0;
}
