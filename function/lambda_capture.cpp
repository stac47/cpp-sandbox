#include <functional>

int main(int argc, const char* argv[])
{
    std::function<void ()> func = [argc, argv]() {};
    return 0;
}
