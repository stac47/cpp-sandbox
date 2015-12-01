#include <functional>
#include <sstream>
#include <iostream>

void f(int a, int b, std::stringstream& o)
{
    o << a << " " << b;
    std::cout << o.str() << std::endl;
}

int main(int argc, const char * argv[])
{
    std::stringstream aStream;
    auto g = std::bind(f, std::placeholders::_1, 2, std::ref(aStream));
    g(2);
}
