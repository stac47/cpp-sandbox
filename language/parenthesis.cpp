#include <cassert>

const int kConstInt = 42;

int const * my_function()
{
    return &kConstInt;
}

#define MY_FUNCTION_42 \
    (*(my_function()))

extern int MY_FUNCTION_42;

const int kConstFromFunction = MY_FUNCTION_42;

int main()
{
    assert(
        *my_function() == 42
    );

    assert(
        *(my_function()) == 42
    );

    assert(
        (*(my_function())) == 42
    );

    assert(
        kConstFromFunction == 42
    );
    return 0;
}

