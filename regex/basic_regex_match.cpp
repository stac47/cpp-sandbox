#include <regex>
#include <string>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::string s = "12-3-1-0-1-1-0-23";
    std::smatch m;
    std::regex_search(s, m, std::regex("-0-\\d*$"));
    if (m.empty())
    {
        std::cout << "Not Found" << std::endl;
    }
    else
    {
        std::cout << "Found " << m[0] << std::endl;
    }
    return 0;
}
