class A {};

class B : public A {};

void f(const A& a) {}

int main(int argc, const char ** argv) {
    B b;
    B* pb = &b;
    f(b);
    f(*pb);
}
