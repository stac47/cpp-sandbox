#include <string>
#include <stdexcept>
#include <iostream>

class MyException : public std::runtime_error
{
public:
    MyException(const std::string& iWhat)
      : std::runtime_error(iWhat)
    {}

};

int main(int argc, const char *argv[])
{
    try
    {
        throw MyException("Hello World");
    }
    catch (const MyException& e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
