#include <type_traits>
#include <iostream>
#include <functional>

struct F
{
    void operator()(int a) {}
};

int main(int argc, const char* argv[])
{
    std::cout << std::boolalpha;
    std::cout << std::is_function<F()>::value << std::endl;
    std::cout << std::is_same<F(), std::function<void (int)>>::value << std::endl;
}
