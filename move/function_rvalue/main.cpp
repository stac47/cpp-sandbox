#include <memory>

struct S {};

void f(S&& s) {}
void g(std::unique_ptr<S>&& p) {}

int main(int argc, const char *argv[])
{
    S s;
    f(s);
    auto p = std::make_unique<S>();
    g(p);
    return 0;
}

