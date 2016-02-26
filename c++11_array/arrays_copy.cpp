#include <array>
#include <iostream>

int main(int argc, const char *argv[])
{
    int a1[3] = {1, 2, 3};
    std::array<int, 3> a2;
    a2 = a1; // Error here
    for (auto i : a2)
    {
        std::cout << i << " ";
    }
    std::cout <<std::endl;
    return 0;
}
