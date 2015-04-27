#include <iostream>
#include <memory>

using namespace std;

class TestObject {
    int _value;
public:
    TestObject(int v=0): _value(v) {}
    ~TestObject() {
        cout << "TestObject destroyed" << endl;
    }

    int add(int v) {
        cout << "int add(int v)" << endl;
        return _value + v;
    }

    const int add(const int v) const {
        cout << "const int add(int v) const" << endl;
        return _value + v;
    }
};

int main(int argc, const char * argv[]) {
    unique_ptr<TestObject> oPtr(new TestObject);
    int i = 7;
    const int ci = 7;

    oPtr->add(i);
    oPtr->add(ci);
    oPtr->add(7);
    const int a = oPtr->add(7);

    return 0;
}
