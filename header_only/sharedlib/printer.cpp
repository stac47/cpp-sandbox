#include "printer.h"

#include "tools.h"

#include <iostream>

namespace stac {

void print(int a, int b) {
    int c = doStuff(a, b);
    std::cout << "WARNING: this library expected doStuff("
              << a << ", " << b << ") to return " << a + b
              << ". Effective return value: " << c
              << std::endl;
    auto f1 = static_cast<float>(a);
    auto f2 = static_cast<float>(b);
    auto f = doStuffTemplate(f1, f2);
    std::cout << "WARNING: this library expected doStuffTemplate("
              << f1 << ", " << f2 << ") to return " << f1 + f2
              << ". Effective return value: " << f
              << std::endl;

}

} /* namespace stac */
