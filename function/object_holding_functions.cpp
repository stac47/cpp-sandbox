#include <functional>
#include <iostream>


struct Hooks
{
    std::function<void()> f1;
    std::function<void()> f2;
};

void sayHello()
{
    std::cout << "Hello World" << std::endl;
}

void sayGoodbye()
{
    std::cout << "Goodbye sick sad world" << std::endl;
}

int main(int argc, const char *argv[])
{
    Hooks hooks;
    hooks.f1 = sayHello;
    hooks.f2 = sayGoodbye;

    std::cout << "History of life" << std::endl;
    hooks.f1();
    hooks.f2();
    return 0;
}

