#include <memory>

class A : public std::enable_shared_from_this<A> {
public:
    std::shared_ptr<A>getA() {
        return shared_from_this();
    }
};

int main(int argc, const char ** argv) {
    A a;
    auto pa = a.getA();
    return 0;
}

