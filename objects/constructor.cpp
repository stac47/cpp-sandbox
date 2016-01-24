#include <iostream>

class A
{
public:
    A(int i): i_(i) {}
    A(const A& a) = delete;
    /* A& operator=(const A&) = delete; */
    inline int get() const {return i_;}
private:
    int i_;
};

int main(int argc, const char *argv[])
{
    A a(12);
    A b(1);
    std::cout << a.get() << ", " << b.get() << std::endl;
    b = a;
    std::cout << a.get() << ", " << b.get() << std::endl;

    return 0;
}
