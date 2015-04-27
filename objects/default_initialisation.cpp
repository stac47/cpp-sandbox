#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct A {
    bool _bool;
    int _int;
    int* _pint;
    string _string;
    vector<string> _vector;
};

void Display(const A& a) {
    cout << "bool value: " << a._bool << endl;
    if (a._bool) {
        cout << "bool is true" << endl;\
    }
    else {
        cout << "bool is false" << endl;\
    }
    cout << "int value: " << a._int << endl;
    cout << "pointer to int value: " << a._pint << endl;
    cout << "string size: " << a._string.size() << endl;
    cout << "vector size: " << a._vector.size() << endl;
}

int main(int argc, const char* argv[]) {
    A a;
    Display(a);

    cout << "==================================" << endl;

    static A b;
    Display(b);
    return 0;
}
