#include <memory>

struct A
{
    bool value;
};

void f(const std::shared_ptr<const A>& iInput)
{
    // iInput->value = false;
}

int main(int argc, const char *argv[])
{
    std::shared_ptr<A> p = std::make_shared<A>();
    p->value = true;
    f(p);
    return 0;
}
