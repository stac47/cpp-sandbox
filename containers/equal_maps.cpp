#include <map>
#include <iostream>
#include <string>

int main(int argc, const char* argv[])
{
    std::map<std::string, std::string> aMap1;
    aMap1["a"] = "aa";
    aMap1["b"] = "cc";
    std::map<std::string, std::string> aMap2;
    aMap2["b"] = "cc";
    aMap2["a"] = "aa";
    std::cout << std::boolalpha << (aMap1 == aMap2) << std::endl;
    return 0;
}
