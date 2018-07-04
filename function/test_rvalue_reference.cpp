#include <utility>

class X {};

void f(const X&) {}

X factory()
{
    return std::move(X());
}

int main(int argc, const char *argv[])
{
    f(factory());
    return 0;
}
