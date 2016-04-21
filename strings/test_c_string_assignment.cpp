#include <string>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::string s;
    for (int i = 0; i < 10; ++i)
    {
        s = std::string("ABCDEFGHIJKLMNOPQRSTUVWXYZ").append(i);
        std::cout << s << std::endl;
    }
    return 0;
}
