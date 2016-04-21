namespace n1 {
struct A {};
} /* namespace n1 */

namespace n2 {
struct B {};

void f(n1::A a, n2::B b) {}
} /* namespace n2 */

int main(int argc, const char *argv[])
{
    n1::A a;
    n2::B b;
    f(a, b);
    return 0;
}
