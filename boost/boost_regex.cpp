#include <string>
#include <iostream>

#include <boost/regex.hpp>

int main(int argc, const char *argv[])
{
    const static boost::regex expression("(\\d+)");
    boost::cmatch aMatch;
    if (boost::regex_match("2", aMatch, expression))
    {
        std::cout << "'2' matches the pattern: " << aMatch[1] << std::endl;
    }

    if (boost::regex_match("-2", expression))
    {
        std::cout << "'-2' matches the pattern" << std::endl;
    }
    return 0;
}
