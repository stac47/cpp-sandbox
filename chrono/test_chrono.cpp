#include <iostream>
#include <chrono>
#include <iomanip>
#include <ctime>

int main(int argc, const char *argv[])
{
    std::chrono::steady_clock::time_point t = std::chrono::steady_clock::now();
    std::cout << "Time: "
              << std::chrono::duration_cast<std::chrono::seconds>(t.time_since_epoch()).count()
              << std::endl;
    std::chrono::milliseconds d(6890);
    std::chrono::steady_clock::time_point t2 = t + d;
    std::cout << d.count() << " " << ((t - t2).count() < 1) << std::endl;
    return 0;
}
