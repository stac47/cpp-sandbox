#include <iostream>

class A {
public:
    A() {
        std::cout << "Build A" << std::endl;
    }
    A(const A& a) {
        std::cout << "Copy Build A" << std::endl;
    }
    ~A() {
        std::cout << "Destruct A" << std::endl;
    }

};

class B {
public:
    B() {
        std::cout << "Build B" << std::endl;
    }
    B(const B& a) {
        std::cout << "Copy Build B" << std::endl;
    }
    ~B() {
        std::cout << "Destruct B" << std::endl;
    }
};

class Compound {
public:
    Compound(const A& a, const B& b): _a(a), _b(b) {}
    ~Compound() {
        std::cout << "Destruct Compound" << std::endl;
    }

private:
    B _b;
    A _a;
};

int main(int argc, const char ** argv) {
    A a;
    B b;
    Compound c(a,b);
}
