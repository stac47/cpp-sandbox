#include <map>
#include <iostream>
#include <string>
#include <utility>

#include <boost/foreach.hpp>

int main(int argc, const char* argv[])
{
    std::map<std::string, int> aMap;
    aMap["one"] = 1;
    aMap["two"] = 2;
    aMap["un"] = 3;
    typedef std::pair<std::string, int> StringIntPair_t;
    BOOST_FOREACH(StringIntPair_t p, aMap)
    {
        std::cout << p.first << " = " << p.second << std::endl;
    }
    return 0;
}

