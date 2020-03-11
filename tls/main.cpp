#include <iostream>

#include "lib.h"

int main(int argc, const char *argv[])
{
    std::cout << A<>::fromTLS(0) << std::endl;
    std::cout << A<>::fromTLS(1) << std::endl;
    std::cout << A<>::fromTLS(2) << std::endl;
    return 0;
}
