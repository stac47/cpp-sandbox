#include <cstdio>
#include <iostream>

char buffer[2];

int main(int argc, const char ** argv) {
    sprintf(buffer, "%05d", 12);
    std::cout << buffer << std::endl;
    return 0;
}

