#include <regex>
#include <iostream>
#include <string>

int main(int argc, const char * argv[])
{
    std::cout << std::boolalpha;

    std::string s = "X00000047";
    std::regex re("([A-Z])(0*)([1-9]\\d*)");
    std::smatch result;
    if (std::regex_match(s, result, re))
    {
        std::cout << result[1] << std::endl;
    }

    std::cout << std::regex_replace(s, re, "$1$3") << std::endl;
}
