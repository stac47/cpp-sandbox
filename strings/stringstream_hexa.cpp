#include <sstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <ios>
#include <utility>

static std::string ToHex(uint16_t a, uint16_t b)
{
    std::ostringstream os;
    os << std::hex << a << b;
    return os.str();
}

static std::pair<uint16_t, uint16_t> FromHex(const std::string& s)
{
    uint32_t c = 0;
    std::istringstream is(s);
    is >> std::hex >> c;
    return std::make_pair(c >> 16, c & 0x0000FFFF);
}

int main(int argc, const char *argv[])
{
    auto s = ToHex(0x0ABC, 0xFE10);
    std::cout << s << std::endl;
    auto p = FromHex(s);
    std::cout << p.first << " " << p.second << std::endl;

    std::ostringstream os;
    os << std::setfill('0') << std::hex << std::setw(4) << 42;
    os << std::setw(4) << 42;
    std::cout << os.str() << std::endl;
    return 0;
}




