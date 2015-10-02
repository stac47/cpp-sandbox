#include <string>
#include <sstream>
#include <iostream>

enum MyEnum
{
    kDefault,
    kValue1,
    kValue2
};

void f(MyEnum e)
{
    std::cout << e << std::endl;
}

int main(int argc, const char * argv[])
{
    std::stringstream ss;
    ss << kValue1;
    std::cout << ss.str() << std::endl;
    f(static_cast<MyEnum>(5));
}

