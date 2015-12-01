#include <iostream>

int main(int argc, const char * argv[])
{
    int *p = nullptr;
    std::cout << "Before destruction" <<std::endl;
    delete p;
    std::cout << "After destruction" <<std::endl;
}
