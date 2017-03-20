#include <vector>
#include <algorithm>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::vector<int> v(10);
    if (std::none_of(v.begin(), v.begin(), [](auto i){return false;}))
    {
        std::cout << "true";
    }
    else
    {
        std::cout << "false";
    }
    std::cout << std::endl;
    return 0;
}
