#include <memory>
#include <iostream>

class A {
public:
    ~A()
    {
        std::cout << "A [addr=" << this << "] is destroyed" << std::endl;
    }
};

int main(int argc, const char *argv[])
{
    auto pa = std::make_unique<A>();
    std::cout << "A Constructed [pointer=" << &pa <<"]"<< std::endl;
    pa.reset();
    std::cout << "A Reset" << std::endl;
    return 0;
}
