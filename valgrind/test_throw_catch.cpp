#include <iostream>

int main(int argc, const char *argv[])
{
    try
    {
        throw 1;
    }
    catch (const int& i)
    {
        std::cout << "Thrown value is: " << i << std::endl;
    }
    return 0;
}
