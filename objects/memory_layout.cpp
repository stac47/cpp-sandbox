#include <map>

struct A
{
    int i;
    bool b;
    bool b2;
    bool b3;
    char c;
    std::map<int, int> m;
    float f;
};

int main(int argc, const char *argv[])
{
    A a;
    a.i = 10;
    a.b = true;
    a.b2 = false;
    a.b3 = true;
    a.c = '\n';
    a.m[1] = 1;
    a.f = 3.14f;
    return 0;
}
