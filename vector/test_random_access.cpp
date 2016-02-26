#include <vector>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::vector<int> v;
    v.push_back(1);
    v.push_back(2);
    std::vector<int> vv;
    vv.push_back(1);
    vv.push_back(2);
    std::cout << std::boolalpha << (v == vv) << std::endl;
    return 0;
}
