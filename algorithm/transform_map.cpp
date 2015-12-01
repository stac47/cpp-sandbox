#include <map>
#include <algorithm>
#include <string>
#include <sstream>
#include <utility>
#include <vector>

std::string Concatenate(const std::pair<std::string, std::string>& p)
{
    std::stringstream ss;
    ss << p.first << " " << p.second;
    return ss.str();
}

int main(int argc, const char* argv[])
{
    std::vector<std::string> v;
    std::map<std::string, std::string> m;
    m["Laurent"] = "Stacul";
    m["Stepahnie"] = "Drevet";
    std::transform(m.begin(), m.end(), std::back_inserter(v), Concatenate);
    return 0;
}
