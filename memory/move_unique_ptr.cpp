#include <iostream>
#include <memory>
#include <string>

void f(std::unique_ptr<std::string> iPtr)
{
    std::cout << *iPtr << std::endl;
}

void g(const std::unique_ptr<const std::string>& iPtr)
{
    std::cout << *iPtr << std::endl;
}

void h(const std::unique_ptr<const std::string>&& iPtr)
{
    /* auto p = std::move(iPtr); */
    std::cout << *iPtr << std::endl;
}

std::unique_ptr<const std::string>&& BuildString()
{
    auto ret = std::make_unique<const std::string>("Hello World 3");
    return std::move(ret);
    /* return ret; */
}

int main(int argc, const char *argv[])
{
    const auto ptr = std::make_unique<const std::string>("Hello World !");
    // f(ptr); copy constructor deleted: no ownership transfer
    g(ptr);
    h(std::move(ptr));
    /* ptr->size(); */
    /* h(ptr); */
    /* h(BuildString()); */
    /* std::unique_ptr<const std::string> p = BuildString(); */
    /* h(std::make_unique<std::string>("toto")); */
    //f(std::move(ptr));
    return 0;
}
