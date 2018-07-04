#include <cstring>
#include <iostream>

int main(int argc, const char *argv[])
{
    const char* str1 = "Hello";
    const char* str2 = "Hello";
    if (std::strncmp(str1, str2, 5))
    {
        std::cout << "Not Equal" << std::endl;
    }
    else
    {
        std::cout << "Equal" << std::endl;
    }
    return 0;
}
