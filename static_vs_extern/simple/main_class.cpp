#include <string>
#include <iostream>
#include <ios>

template<bool IS_STATIC>
class MyClass
{
public:
    MyClass()
    {
        std::cout << std::boolalpha
                  << "MyClass::MyClass() is_static=" << IS_STATIC
                  << std::endl;
    }

    ~MyClass()
    {
        std::cout << std::boolalpha
                  << "MyClass::~MyClass() is_static=" << IS_STATIC
                  << std::endl;
    }

    void setValue(const std::string& value)
    {
        value_ = value;
    }

    const std::string& getValue() const
    {
        return value_;
    }
private:
    std::string value_;
};

extern MyClass<false> my_extern_class;
static MyClass<true> my_static_class;

MyClass<false> my_extern_class;

template<bool B>
void changeObject(MyClass<B>& c)
{
    std::cout << " ---------- " << std::endl;
    std::cout << c.getValue() << std::endl;
    std::cout << " ---------- " << std::endl;
    c.setValue(B ? "static" : "extern");
    std::cout << " ---------- " << std::endl;
    std::cout << c.getValue() << std::endl;
    std::cout << " ---------- " << std::endl;
}

int main(int argc, const char *argv[])
{
    changeObject(my_extern_class);
    changeObject(my_static_class);
    return 0;
}
