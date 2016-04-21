#include <tuple>
#include <iostream>

int main(int argc, const char *argv[])
{
    auto t = std::make_tuple('a', 10, true);
    std::cout << std::move(t) << std::endl;
    return 0;
}
