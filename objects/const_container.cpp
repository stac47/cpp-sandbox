#include <string>
#include <iostream>

struct ConstContainer
{
    static const std::string kVal1;
    static const int kVal2 = 19;
};

const std::string ConstContainer::kVal1 = "VAL1";

int main(int argc, const char * argv[])
{
    std::cout << "kVal1=" << ConstContainer::kVal1 << ", "
              << "kVal2=" << ConstContainer::kVal2 << "."
              << std::endl;
}
