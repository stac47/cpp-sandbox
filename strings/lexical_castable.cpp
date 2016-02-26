#include <iostream>
#include <string>

#include <boost/lexical_cast.hpp>

int main(int argc, const char* argv[])
{
    A a;
    std::string s = boost::lexical_cast<std::string>(a);
    std::cout << s << std::endl;
}
