#include <iostream>

class Base {
public:
    virtual void print() = 0;
    virtual void other() = 0;
};

class Child : public Base {
    int _value;
public:
    Child():Base(), _value(19) {}
    virtual void print() override {
        std::cout << "Hello" << std::endl;
    }
    virtual void other() override {
        std::cout << "other" << std::endl;
    }
};

int main(int argc, const char* argv[]) {
    Base *o = new Child;
    o->print();
    o->other();
    delete o;
}
