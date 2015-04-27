#include "SpecialChars.h"

typedef void (*fun_t)(void);

void f(fun_t fun) {
    fun();
}

int main(int argc, const char* argv[]) {
    f(special::inlinedFunction);
}
