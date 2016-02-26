#include <map>

int main(int argc, const char *argv[])
{
    std::map<int, int> m;
    m[1] = 2;
    int a = m[2] + 3;
    return a;
}
