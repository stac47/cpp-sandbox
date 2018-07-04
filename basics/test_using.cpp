// using does not solve the problem of strong typedef
using MyInt = int;

void f(MyInt i) {}

int main(int argc, const char *argv[])
{
    int value = 42;
    f(42);
    f(value);
    return 0;
}
