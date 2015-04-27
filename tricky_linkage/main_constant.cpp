#include "Constants.h"

void f(const int& i) {}

int main(int argc, const char* argv []) {
    f(Constants::kInt);
}

