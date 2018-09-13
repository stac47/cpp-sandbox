#include "header1.h"
#include "hack.h"

#include <iostream>

std::string my_extern_string = "extern string";

int main(int argc, const char *argv[])
{
    my_static_string = "static string";
    hack();
    std::cout << my_static_string << std::endl;
    std::cout << my_extern_string << std::endl;
    return 0;
}
