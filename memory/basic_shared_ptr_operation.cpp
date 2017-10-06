#include <memory>
#include <cassert>

class A
{
public:
    A(): a_(42) {}
private:
    int a_;
};

int main(int argc, const char *argv[])
{
    std::shared_ptr<A> pa;
    assert(!pa);
    return 0;
}
