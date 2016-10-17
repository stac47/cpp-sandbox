#include <set>
#include <string>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <iomanip>
// #include <functional>

#include <boost/bind.hpp>
#include <boost/iterator/counting_iterator.hpp>

std::string BuildPaddedString(unsigned int iValue,
                              char iPaddingChar,
                              size_t iStringLength)
{
    std::ostringstream oss;
    oss << std::setw(iStringLength) << std::setfill(iPaddingChar)
        << iValue;
    return oss.str();
}

int main(int argc, const char *argv[])
{
    // using namespace std::placeholders;
    using namespace boost::placeholders;

    std::cout << BuildPaddedString(12, '0', 10) << std::endl;
    std::cout << BuildPaddedString(12, '0', 1) << std::endl;

    std::set<std::string> myset;
    std::transform(boost::counting_iterator<unsigned int>(5),
                   boost::counting_iterator<unsigned int>(15),
                   std::inserter(myset, myset.end()),
                   boost::bind(BuildPaddedString, _1, '0', 10));
                   // std::bind(BuildPaddedString, _1, '0', 10));
    for (auto s : myset)
    {
        std::cout << s << std::endl;
    }

    return 0;
}

