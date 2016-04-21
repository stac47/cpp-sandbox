#include <iostream>

class A
{
public:
    static int Value;
};

int A::Value;

int main(int argc, const char *argv[])
{
    std::cout << A::Value << std::endl;
    return 0;
}
