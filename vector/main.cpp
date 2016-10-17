#include <iostream>
#include <algorithm>
#include <vector>

int main(int argc, const char* argv[]) {
    std::vector<int> v(10);
    for (int i=0; i < 10; ++i) {
        v[i] = 2 * i;
    }
    std::cout << "Size: " << v.size() << std::endl;
    v.resize(5);
    for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "ReSize: " << v.size() << std::endl;

    auto max = std::max(v.begin(), v.end());
    std::cout << "Max: " << *max << std::endl;
}

