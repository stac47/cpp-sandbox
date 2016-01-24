#include <memory>

class A
{
public:
    A(){};
    virtual ~A(){};
};

class B : public A
{
public:
    B() {};
    virtual ~B() {};

private:
    /* data */
};

void f(A& a) {}
void g(const A& a) {}
void h(const std::unique_ptr<A>& a) {}
void rh(A* a) {}

int main(int argc, const char *argv[])
{
    B b;
    const B cb;
    std::unique_ptr<A> pb = std::make_unique<B>();
    auto rpb = new B();
    f(b);
    // f(cb); // normal
    g(b);
    g(cb);
    h(pb);
    rh(rpb);
    return 0;
}
