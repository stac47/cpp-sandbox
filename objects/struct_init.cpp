#include <iostream>
#include <map>
#include <string>

struct S
{
    int a;
    std::string s;
    std::map<int, int> m;
    bool b;
};

void Display(const S& s)
{
    std::cout << "int: " << s.a
              << "string: " << s.s
              << "map: " << s.m.size()
              << "bool: " << s.b
              << std::endl;
}

int main(int argc, const char * argv[])
{
    S s;
    Display(s);
    std::cout << std::endl;
    S t = {};
    Display(t);
    return 0;
}

