#include <string>
#include <iostream>
#include <boost/regex.hpp>

int main(int argc, const char *argv[])
{
    std::string s = "12-3-1-0-1-1-0-23";
    boost::smatch m;
    boost::regex_search(s, m, boost::regex("-0-\\d*$"));
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
