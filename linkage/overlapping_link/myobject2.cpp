#include <cstring>
#include <iostream>

const size_t kBufferSize = 1000;

class MyObject {
public:
    char buffer[kBufferSize];
    MyObject() {
        std::memset(buffer, 0, kBufferSize);
    }
};

void test2() {
    MyObject o;
    std::cout << o.buffer[0] << std::endl;
}
