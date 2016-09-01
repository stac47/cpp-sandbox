#include <iostream>

void f(int i)
{

    switch (i) {
        case 10:
            std::cout << "case 10" << std::endl;
        case 11:
            std::cout << "case 11" << std::endl;
        default:
            std::cout << "case default" << std::endl;
        case 20:
            std::cout << "case 20" << std::endl;
            break;
    }
}

int main(int argc, const char *argv[])
{
    f(10);
    std::cout << "----------------------------------" << std::endl;
    f(20);
    std::cout << "----------------------------------" << std::endl;
    f(2);
    std::cout << "----------------------------------" << std::endl;
    return 0;
}
