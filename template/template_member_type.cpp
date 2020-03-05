template<typename T>
struct A {
    typedef T value_type;
};

typename A<char>::value_type* t;
