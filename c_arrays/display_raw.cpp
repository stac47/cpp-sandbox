#include <iostream>
#include <string>

int main(int argc, const char *argv[])
{
    char compressed[] = { 0x02,'g','o','o','o','o',0x31,0x00,0x00,0x05,'a','a','a','a','a','a','a','l',0x11,0x00,0x00 };
    std::string str(compressed, 21);
    std::cout << str;
    return 0;
}
