#include <iostream>
#include <bitset>

int main(int argc, const char *argv[])
{
    std::cout << sizeof(std::bitset<7>) << std::endl;
    std::cout << sizeof(std::bitset<8>) << std::endl;
    std::cout << sizeof(std::bitset<127>) << std::endl;
    std::cout << sizeof(std::bitset<255>) << std::endl;
    std::cout << sizeof(std::bitset<65535>) << std::endl;
    return 0;
}
