#include <memory>
#include <iostream>
#include <ios>

int main(int argc, const char *argv[])
{
    std::unique_ptr<int> p;
    std::cout << std::boolalpha << static_cast<bool>(p) << std::endl;
    p.reset(new int(1));
    std::cout << std::boolalpha << static_cast<bool>(p) << std::endl;
    std::cout << (p ? "SET" : "NOT SET") << std::endl;

    return 0;
}
