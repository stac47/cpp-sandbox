/**
 * @file main.cpp
 * @brief This tests the fact we do not use 'virtual' in each layer of an
 *        inheritance tree.
 * @author Laurent Stacul
 * @version 1.0
 * @date 2014-11-03
 */

#include <iostream>

using namespace std;

struct A {
    virtual void f() {
        cout << "I am A" << endl;
    }
};

struct B : public A {
    // If virtual is here and not in the base class, resolution is static...
    /*virtual */ void f() {
        cout << "I am B" << endl;
    }
};

struct C : public B {
    void f() {
        cout << "I am C" << endl;
    }
};


int main(int argc, char const * argv[]) {
    A* pa = new A;
    A* pb = new B;
    A* pc = new C;
    pa -> f();
    pb -> f();
    pc -> f();
    delete pa;
    delete pb;
    delete pc;
    return 0;
}
