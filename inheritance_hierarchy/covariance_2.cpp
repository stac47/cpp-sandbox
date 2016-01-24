#include <memory>

class A {};
class B : public A {};

class Object
{
public:
    Object() {};
    virtual ~Object() {};

    virtual void f(const std::unique_ptr<A> a) {}

    virtual std::unique_ptr<A> g()
    {
        return std::make_unique<A>();
    }
};

class Derived : public Object
{
public:
    Derived():Object(){}
    virtual ~Derived() {};
    void f(const std::unique_ptr<A>) override {}

    std::unique_ptr<B> g() override
    {
        return std::make_unique<B>();
    }
};
