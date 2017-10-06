#include <map>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::map<int, int> m;
    m[0]++;
    m[1] = 2;
    int a = m[2] + 3;
    std::cout << m[0] << std::endl;
    return a;
}
