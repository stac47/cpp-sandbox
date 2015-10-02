class A
{
public:
    inline virtual void f() {}
};

class B : public A
{
public:
    inline virtual void g()
    {
        f();
    }
};

int main(int argc, const char * argv[])
{
    A* pb = new B;
    delete pb;
    return 0;
}
