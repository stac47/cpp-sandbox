#include <string>
#include <iostream>

namespace {

std::string GenerateString()
{
    std::string s("Hello");
    return s;
}

} /* namespace  */

int main(int argc, const char *argv[])
{
    const std::string& s = GenerateString();
    std::string ss = GenerateString();
    const std::string css = GenerateString();
    std::cout << s << std::endl;
    std::cout << ss << std::endl;
    std::cout << css << std::endl;
    return 0;
}
