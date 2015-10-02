#include <iostream>

int main(int argc, const char* argv[])
{
    char tab[2] = {static_cast<char>(0xC1),
                   static_cast<char>(0x50)};
    char a = tab[0];
    std::cout << a << std::endl;
    return 0;
}

