#include <iostream>

using namespace std;

class Object {
    int _value;
public:
    Object():_value(19) {}
    int& getRef() {return _value;}
    int getValue() {return _value;}
};

int main(int argc, const char* argv[]) {
    Object o;
    int& ref = o.getRef();
    int val = o.getValue();
}

