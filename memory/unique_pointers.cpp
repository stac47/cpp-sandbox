#include <memory>
#include <iostream>
#include <map>

class A
{
public:
    void f() {}
};

int main(int argc, const char *argv[])
{
    std::map<int, std::unique_ptr<A>> m;
    m[1] = std::make_unique<A>();
    m[1]->f();
    auto pa = std::make_unique<A>();
    std::unique_ptr<A> pb;
    pb.reset(&*pa); // double free :-(
    return 0;
}
