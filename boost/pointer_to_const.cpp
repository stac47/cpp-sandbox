#include <boost/smart_ptr.hpp>

struct A
{
    bool value;
};

void f(const boost::shared_ptr<const A>& iInput)
{
    // iInput->value = false;
}

int main(int argc, const char *argv[])
{
    boost::shared_ptr<A> p = boost::make_shared<A>();
    p->value = true;
    f(p);
    return 0;
}

