#include <cstdio>

int f(int a, int b, int c) {
    return a+b+c;
}

int main(int argc, const char* argv[]) {
    int r = f(1, 2, 3);
    printf("%d", r);
    return 0;
}
