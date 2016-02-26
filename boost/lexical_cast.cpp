#include <string>
#include <iostream>
#include <vector>

#include <boost/lexical_cast.hpp>

int main(int argc, const char* argv[])
{
    std::string number = "3.1415";
    std::string notNumber = "3.14.15";
    std::string withLetters = "3.14ABC";
    std::vector<std::string> v = {number, notNumber, withLetters};
    for (auto s : v){
        try {
            auto d = boost::lexical_cast<double>(s);
            std::cout << "Cast value: " << d << std::endl;
        }
        catch (const boost::bad_lexical_cast&)
        {
            std::cout << "Error when parsing " << s << std::endl;
        }
    }
    return 0;
}
