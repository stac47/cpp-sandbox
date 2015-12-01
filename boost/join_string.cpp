#include <string>
#include <vector>
#include <iostream>

#include <boost/algorithm/string/join.hpp>

namespace ba = boost::algorithm;

int main(int argc, const char* argv[]) {
    std::vector<std::string> v;
    v.push_back("Laurent");
    v.push_back("Stephanie");
    std::cout << ba::join(v, " & ") << std::endl;
}


