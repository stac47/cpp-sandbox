#include <memory>
#include <string>
#include <iostream>

using namespace std;

class A {
public:
    A() {
        cout << "default constructor " << this << endl;
    }

    A(const A& a) {
        cout << "copy constructor " << this << endl;
    }

    ~A() {
        cout << "destroyed " << this << endl;
    }
};


shared_ptr<A> f() {
    return make_shared<A>();
}

A g() {
    A a;
    return a;
}

int main(int argc, const char* argv[]) {
    cout << "Return a shared pointer" << endl;
    auto pa = f();
    cout << "Return by value" << endl;
    A a = g();
}
