#include <iostream>

struct A
{
    short s;
    char b;
} __attribute__((packed));

int main(int argc, const char *argv[])
{
    std::cout << sizeof(A) << std::endl;
    return 0;
}
