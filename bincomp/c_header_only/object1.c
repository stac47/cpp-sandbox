#include "header.h"

#include <stdio.h>

extern void stac_some_business();

int main(int argc, const char *argv[])
{
    stac_print();
    puts("Some business");
    stac_some_business();

    return 0;
}
