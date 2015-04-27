#include <iostream>
#include <vector>
#include <typeinfo>

using namespace std;

class B;
class C;

class A {
public:
    static B kB;
    static C kC;

    static void Get(A* oA) {
        oA = exemplars()[0];
    }

    A() {
        cout << "ctor A" << endl;
        exemplars().push_back(this);
    }

    virtual ~A() {}

    virtual void printText() const {
        cout << typeid(*this).name() << endl;
    }
private:
    static vector<A*>& exemplars() {
        static vector<A*> v;
        return v;
    }
};

class B : public A {
public:
    B():A() {
        cout << "ctor B" << endl;
    }
};

class C : public A {
public:
    C():A() {
        cout << "ctor C" << endl;
    }
};

B A::kB;
C A::kC;

int main(int argc, const char* argv[]) {
    A* pa = nullptr;
    A::Get(pa);
    pa->printText();
    return 0;
}

