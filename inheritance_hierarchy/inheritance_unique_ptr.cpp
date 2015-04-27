#include <memory>
#include <iostream>

using namespace std;

class A {
public:
    virtual ~A() {
        cout << "A dtor" << endl;
    }
};

class B : public A {
public:
    virtual ~B() {
        cout << "B dtor" << endl;
    }
};

class C : public A {
public:
    virtual ~C() {
        cout << "C dtor" << endl;
    }
};

int main(int argc, const char * argv[]) {
    unique_ptr<A> p(new B);
}

