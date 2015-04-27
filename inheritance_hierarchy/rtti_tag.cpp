#include <typeinfo>
#include <vector>
#include <string>
#include <iostream>

using namespace std;

class A {
public:
    virtual string getTag() {
        return typeid(*this).name();
    }
};

class B : public A {};

int main(int argc, const char* argv[]) {
    A* pa = new B;
    cout << pa->getTag() << endl;
    delete pa;
}

