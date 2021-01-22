#include <iostream>

int main(int, char *[])
{
    using std::swap;
    int i = 1;
    int j = 2;
    using std::swap;
    swap(i, j);
    std::cout << "i=" << i << ", j=" << j << std::endl;
    return 0;
}
