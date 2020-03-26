#include <vector>
#include <iostream>

int main(int, const char *[])
{
    int size = 10;
    std::vector<char>* pv = new std::vector<char>(size);
    for (int i=0; i <size; ++i) {
        pv->push_back('x');
    }
    for (auto c : *pv) {
        std::cout << "Value: " << c << std::endl;
    }
    return 0;
}
