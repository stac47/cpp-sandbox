#include <iostream>

int main(int argc, const char *argv[])
{
    extern std::string my_string;
    std::cout << my_string << std::endl;
    return 0;
}
