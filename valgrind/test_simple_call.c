#include <stdio.h>

char stac_func()
{
    char tab[5] = {'a', 'b', 'c', 'd', 'e' };
    return tab[2];
}

int main(int argc, const char *argv[])
{
    char a = stac_func();
    printf("Value=[%c]", a);
    return 0;
}
