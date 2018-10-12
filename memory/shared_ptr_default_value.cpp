#include <memory>
#include <iostream>

void f(std::shared_ptr<int> iValue = nullptr)
{
    if (iValue == nullptr)
    {
        std::cout << "nullptr" << std::endl;
    }
    else
    {
        std::cout << "Value: " << *iValue << std::endl;
    }
}

int main(int argc, const char *argv[])
{
 f();
 f(std::make_shared<int>(42));
 return 0;
}
