#include <cstdio>

int f(int arg1, int arg2, int arg3, int arg4, int arg5, int arg6, int arg7)
{
    return arg1 + arg2 + arg3 + arg4 + arg5 + arg6 + arg7;
}

int main(int argc, const char* argv[]) {
    int r = f(1, 2, 3, 4, 5, 6, 7);
    printf("%d", r);
    return 0;
}
