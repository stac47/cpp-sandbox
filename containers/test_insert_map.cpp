#include <map>
#include <string>
#include <utility>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::map<std::string, int> dict;
    dict.insert(std::pair<std::string, int>("laurent", 19));
    std::cout << "Size=" << dict.size() << "; "
              << dict["laurent"] << std::endl;
    dict.insert(std::pair<std::string, int>("laurent", 20));
    std::cout << "Size=" << dict.size() << "; "
              << dict["laurent"] << std::endl;

    return 0;
}
