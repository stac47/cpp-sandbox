#include <iostream>

void f()
{
    const char text[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAATEST";
    std::cout << text << std::endl;
}

int main(int argc, const char *argv[])
{
    f();
    return 0;
}
