#include <memory>
#include <iostream>

int main(int argc, const char * argv[])
{
    auto pa = std::make_shared<int>(10);
    std::shared_ptr<int> pnull;
    std::cout << "*pa=" << *pa
              << "; pnull=null ?"
              << (pnull ? true : false)
              <<std::endl;
    pnull.swap(pa);
    std::cout << "*pa=" << *pa
              << "; pnull=null ?"
              << (pnull ? true : false)
              <<std::endl;
    return 0;
}
