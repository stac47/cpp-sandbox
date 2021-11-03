#include <iostream>

#include "tools.h"
#include "printer.h"

int main(int, char *[])
{
    int n1 = 0;
    int n2 = 0;
    std::cin >> n1 >> n2;
    std::cout << "From main: doStuff(" << n1 << ", " << n2 << ") "
              << "returned " << doStuff(n1, n2)
              << std::endl;
    auto f1 = static_cast<float>(n1);
    auto f2 = static_cast<float>(n2);
    auto f = doStuffTemplate(f1, f2);
    std::cout << "From main: doStuffTemplate(" << f1 << ", " << f2 << ") "
              << "returned " << f
              << std::endl;

    stac::print(n1, n2);
    return 0;
}
