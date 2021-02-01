#include <iostream>

const size_t kBufferSize = 100;

class MyObject {
public:
    MyObject();
    char buffer[kBufferSize] = {0};
    void f() {
        std::cout << buffer[0] << std::endl;
    }
};

void test1() {
    MyObject o;
    o.f();
}
