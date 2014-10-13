#include <string>
#include <iostream>

#include "mylib.h"

using namespace std;

stac::Greeter::Greeter(string name):_name(name) {}

void stac::Greeter::sayHello() {
    cout << "Hello " << this->_name << " !" << endl;
}
