#include "header.h"

extern void setA(A* a, int i, long l);

int main(int argc, const char *argv[])
{
    A a;
    setA(&a, 4, 7);
    return 0;
}
