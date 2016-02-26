#include <iostream>

struct A
{
    int mInt;
    char mChar;
};

template<typename M>
void f(M& oMember)
{
    oMember = 666;
}

int main(int argc, const char *argv[])
{
    A a = {1, 'a'};
    std::cout << a.mInt << std::endl;
    f(a.mInt);
    std::cout << a.mInt << std::endl;
    return 0;
}
