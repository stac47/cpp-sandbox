#include <memory>

class Interface
{
public:
    virtual void f() = 0;
};

class Impl : public Interface, public std::enable_shared_from_this<Impl>
{
public:
    virtual void f();
    std::shared_ptr<Impl> g()
    {
        return this->shared_from_this();
    }
};

void Impl::f() {}

int main(int argc, const char* argv[])
{
    std::shared_ptr<Impl> pa (new Impl);
    std::shared_ptr<Impl> pb = pa->g();
}


