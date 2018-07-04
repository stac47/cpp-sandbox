#include <iostream>

class X
{
public:
    explicit X(bool b) : _b(b) {}
    operator bool() const
    {
        return _b;
    }
private:
    bool _b;
};

int main(int argc, const char *argv[])
{
    X x1(true);
    X x2(false);
    bool b1 = static_cast<bool>(x1);
    bool b2 = static_cast<bool>(x2);
    if (b1)
    {
        std::cout << "x1 is true" << std::endl;
    }
    if (!b2)
    {
        std::cout << "x2 is false" << std::endl;
    }
    return 0;
}
