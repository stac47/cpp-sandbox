#include <iostream>

using namespace std;

struct A {
    A() {
        cout << "A ctor" << endl;
    }

    ~A() {
        cout << "A dtor" << endl;
    }
};

class B {
    A a;
public:
    B() {
        cout << "B ctor" << endl;
    }
    ~B() {
        cout << "B dtor" << endl;
    }
};

int main(int argc, const char* argv[]) {
    B b;
}

