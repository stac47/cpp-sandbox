#include <utility>
#include <memory>
#include <iostream>
#include <string>

class X {
public:
    X() : _s(std::make_unique<std::string>("Hello")) {}
    void print() const
    {
        std::cout << *_s << std::endl;
    }
private:
    std::unique_ptr<std::string> _s;
};

void f(X&& x)
{
    x.print();
}

int main(int argc, const char *argv[])
{
    f(X());
    return 0;
}
