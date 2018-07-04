#include <chrono>
#include <iostream>

int main(int argc, const char *argv[])
{
    std::chrono::steady_clock::time_point tp{};
    if (tp.time_since_epoch() == std::chrono::steady_clock::duration::zero())
    {
        std::cout << "Great" << std::endl;
    }

    return 0;
}
