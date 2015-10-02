#include <iostream>
#include <memory>

class A {
public:
    void f() const {
        std::cout << "In f() const" << std::endl;
    }

    void g() {
        std::cout << "In g()" << std::endl;
    }
};

using APtr = std::shared_ptr<A>;
using ConstAPtr = std::shared_ptr<const A>;

void h(const ConstAPtr& a) {
    a->f();
}

int main(int argc, const char ** argv) {
    APtr pa = std::make_shared<A>();
    ConstAPtr pca = std::make_shared<const A>();
    // pca = pa;
    // pca->g();
    pa->g();
    h(pca);
    pa = pca;

    return 0;
}

