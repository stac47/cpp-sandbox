#include <string>
#include <iostream>
#include <sstream>

#include "ConstContainer.h"

namespace {

 constexpr std::string f(const std::string& iStr)
{
    return "MOD";
}

const std::string kAnonymousConst =
    f(cpp::ConstContainer::kConst);
} /* namespace  */

int main(int argc, const char *argv[])
{
    std::cout << kAnonymousConst << std::endl;
    return 0;
}
