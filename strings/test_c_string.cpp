#include <iostream>
#include <cstring>

void display(char v[], int len)
{
    for (int i = 0; i < len; ++i)
    {
        if (v[i] == '\0')
        {
            std::cout << "0";
        }
        else
        {
            std::cout << "X";
        }
    }
    std::cout << std::endl;
}

int main(int argc, const char* argv[])
{
    char a[5] = {};
    char b[5];

    std::cout << "char a[5] = {};" << std::endl;
    display(a, 5);
    std::cout << "char b[5];" << std::endl;
    display(b, 5);

}

