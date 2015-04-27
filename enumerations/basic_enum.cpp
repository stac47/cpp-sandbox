#include <iostream>

using namespace std;

namespace stac {

class A {
public:
    enum Enum{
        kValue1,
        kValue2
    };

    A():value_(kValue1) {}

    Enum getEnum() const {
        return value_;
    }

    void setEnum(Enum e) {
        value_ = e;
    }
private:
    Enum value_;
};

} // namespace stac

int main(int args, const char* argv[]) {
    stac::A a;
    cout << a.getEnum() << endl;
    a.setEnum(stac::A::kValue2);
    cout << a.getEnum() << endl;
    stac::A* pa = &a;
    ++pa;
    cout << &a << "+" << sizeof(stac::A) << "==" << pa << endl;
}
