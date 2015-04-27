#include <iostream>

class A {
    int _value;
public:
    explicit A(int value = 19): _value(value) {}
    inline static void SetValue(A& o) {o._value = 12;}
    inline int value() {return _value;}
};

int main(int argc, const char* argv[]) {
    A a;
    A::SetValue(a);
    std::cout << a.value() << std::endl;
}

