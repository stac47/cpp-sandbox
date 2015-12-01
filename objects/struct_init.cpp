#include <iostream>
#include <map>
#include <string>

struct S
{
    int a;
    std::string s;
    std::map<int, int> m;
};

int main(int argc, const char * argv[])
{
    S s;
    std::cout << "int: " << s.a
              << "string: " << s.s
              << "map: " << s.m.size()
              << std::endl;
    return 0;
}

