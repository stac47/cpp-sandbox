#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

int max(int a, int b)
{
    std::cout << "My Max" << std::endl;
    return (a < b ? b : a);
}

int main(int argc, const char* argv[])
{
    int a = 1;
    int b = 2;
    std::cout << ::max(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << std::max(a, b) << std::endl;
}
