#include <iostream>
#include <memory>
#include <cstdlib>

void AtExitHandler() {
    std::cout << "Exiting..." << std::endl;
}

class A {
public:
    A() {
        std::cout << "ctor A" << std::endl;
    }
    ~A() {
        std::cout << "dtor A" << std::endl;
    }
};

class B {
    static std::unique_ptr<A> s1;
    static A* s2;
public:
    B() {
        std::cout << "ctor B" << std::endl;
    }
    ~B() {
        std::cout << "dtor B" << std::endl;
    }
};

std::unique_ptr<A> B::s1 = std::make_unique<A>();
A* B::s2 = new A;

int main(int argc, const char* argv []) {
    const int error = std::atexit(AtExitHandler);
    if (error != 0) {
        std::cerr << "Error during atexit registration" << std::endl;
    }
    // Creating an instance of B
    B b;
}

