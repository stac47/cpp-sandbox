#include <mutex>
#include <iostream>

std::once_flag flag;

int main(int argc, const char *argv[])
{
    std::call_once(flag, [](){ std::cout << "Simple example: called once\n"; });
    return 0;
}
