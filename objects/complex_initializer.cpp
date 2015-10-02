#include <iostream>

class A {
    int _value;
public:
    A(): _value(1) {}
    int getValue() const {return _value;}
};

class B {
    A _a;
public:
    B(): _a(A()) {}
    int getValue() const {return _a.getValue();}
};

int main(int argc, const char ** argv) {
    B b;
    std::cout << b.getValue() << std::endl;
}
