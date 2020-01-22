#include <vector>
#include <iostream>
#include <cstdint>
#include <ctime>
#include <cstdlib>

#include "broken_shared.h"

int main(int argc, const char *argv[])
{
    A a;
    a.setRandom();
    enum { BUFLEN = 128 };
    if (a.length() >= BUFLEN)
    {
        std::cout << "HELLO" << std::endl;
    }
    else
    {
        std::cout << "Bye" << std::endl;
    }
    return 0;
}
