#include <boost/spirit/include/classic_common.hpp>
#include <boost/spirit/include/classic_core.hpp>
#include <boost/spirit/include/classic_parse_tree.hpp>
#include <boost/spirit/include/classic_utility.hpp>

#include <string>
#include <iostream>

int main(int, char *[])
{
    using namespace BOOST_SPIRIT_CLASSIC_NS;
    auto rule = str_p("AA") >> str_p("BB");
    std::string input("AABB");
    auto result = parse(input.c_str(), rule, space_p);
    if (result.full) {
        std::cout << "SUCCESS" << std::endl;
    } else {
        std::cout << "ERROR" << std::endl;
    }
    return 0;
}
