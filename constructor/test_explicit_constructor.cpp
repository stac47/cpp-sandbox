#include <iostream>
#include <type_traits>

class A {
public:
    explicit A(int i)
    {
        std::cout << "Explicit constructor" << std::endl;
    }

    template<typename T>
    [[deprecated("Should not use a non explicit constructor")]]
    A(T i, typename std::enable_if<std::is_integral<T>::value, int>::type = 0)
      : A(i)
    {
        std::cout << "Normal constructor" << std::endl;
    }
};

int main(int, const char *[])
{
    A a = 1;
    A b(2);
    return 0;
}

