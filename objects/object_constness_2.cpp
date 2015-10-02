class A {
public:
    void f() const {}
    void g() {}
};

int main(int argc, const char* argv[])
{
    A a;
    const A& ref = a;
    ref.f();
    // ref.g(); <--- ERROR
    a.g();
}
