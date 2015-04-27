#include <memory>
#include <iostream>

using namespace std;

class A {
public:
    void displayName() {
        f();
    }
protected:
    virtual void f() = 0;
};

class B : public A {
private:
    virtual void f() {
        cout << "I am B" << endl;
    }
};

class C : public B {
protected:
    virtual void f() {
        cout << "I am C" << endl;
    }
};

int main(int argc, const char* argv[]) {
    unique_ptr<A> pa(new B);
    pa->displayName();
    unique_ptr<A> pa2(new C);
    pa2->displayName();
}
