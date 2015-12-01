#include <functional>

int main(int argc, const char* argv[])
{
    std::function<void ()> func = [func]() {func();};
    return 0;
}
