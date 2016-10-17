#include <regex>
#include <string>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::string s = "abc def: ghi:f";
    std::smatch m;
    std::regex_search(s, m, std::regex("([^:]*):?(.*)"));
    if (m.empty())
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << "Found " << m[1] << ", " << m[2] << std::endl;
    }
    return 0;
}
