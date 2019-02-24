#include <stdlib.h>
#include <iostream>


void function_exit()
{
    std::cout << "function_exit()" << std::endl;
}

int main(int argc, const char *argv[])
{
    std::cout << "Program start" << std::endl;
    atexit(function_exit);
    std::cout << "Program exit" << std::endl;
    return 0;
}
