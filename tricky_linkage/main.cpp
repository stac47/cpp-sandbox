#include <string>
#include <algorithm>
#include <iostream>

#include "SpecialChars.h"

int main(int argc, const char* argv[]) {
    std::string s = "Hello World !";
    std::size_t c = std::count(s.begin(), s.end(), SpecialChars::kSpace);
    std::cout << c << std::endl;
}

void __attribute__ ((visibility ("default"))) f() {}
void g() {}

