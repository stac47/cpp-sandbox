#include <vector>
#include <iostream>

int main(int argc, const char * argv[])
{
    std::vector<int> v;
    if (v.empty())
    {
        std::cout << "This vector is empty." << std::endl;
    }
    v.push_back(1);
    if (v.size() == 1)
    {
        std::cout << "This vector has one element." << std::endl;
    }
    return 0;
}

