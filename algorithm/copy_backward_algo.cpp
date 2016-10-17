#include <string>
#include <algorithm>
#include <iostream>

int main(int argc, const char *argv[])
{
    char* to = new char[16];
    std::string from = "Hello World";
    std::copy_backward(from.begin(), from.end(), to + 16);
    for (int i = 0; i < 16; ++i)
    {
        if (to[i])
        {
            std::cout << to[i];
        }
        else
        {
            std::cout << '0';
        }
    }
    std::cout << std::endl;
    delete[] to;
    return 0;
}

