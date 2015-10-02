template<typename T>
class A {
public:
    A<const T>& operator=(const A<T>& rhs) {
        return *this;
    }
    void f() {};
};

int main(int argc, const char ** argv) {
    A<int> aint;
    aint.f();
    A<const int> aconstint;
    aconstint.f();
    aconstint = aint;
    return 0;
}
