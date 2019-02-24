#include <iostream>
#include <algorithm>
#include <string_view>

int main(int argc, const char *argv[])
{
    std::string_view sv(argv[1]);
    std::cout << "Size: " << sv.size() << std::endl;
    std::cout << std::count(sv.begin(), sv.end(), 'A') << std::endl;
    return 0;
}
