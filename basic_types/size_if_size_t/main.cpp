#include <cstdio>
#include <iostream>

struct Unconvertible {
    char buffer[100];
};

int main(int argc, const char *argv[])
{
    // long unsigned int
    size_t size = 19;
    /* Unconvertible u= size; */
    std::cout << sizeof(size) << std::endl;
    std::cout << sizeof(Unconvertible) << std::endl;
    return 0;
}
