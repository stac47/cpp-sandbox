#include <iostream>

int main(int argc, const char* argv[])
{
    int length = 20;
    char* buffer = new char[length];
    std::ostream out(buffer);
    out << 1 << "a" << '\0';
    std::cout << out.str() << std::endl;
    delete[] buffer;
}
