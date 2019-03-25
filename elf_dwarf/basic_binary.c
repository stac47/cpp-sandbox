#include <stdio.h>

void print_hello(const char* iName)
{
    printf("Hello, %s\n", iName);
}


int main(int argc, const char *argv[])
{
    const char* name = "Stac";
    print_hello(name);
    return 0;
}
