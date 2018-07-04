#include <cmath>
#include <thread>
#include <iostream>
#include <chrono>
#include <string>

void f1(int n, const std::string& iName)
{
    for (int i = 0; i < n; ++i)
    {
        std::cout << iName << ": " << i << std::endl;
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
    }
}

void crazy_thread(const std::string& iName)
{
    while (true)
    {
        std::hypot(3.4, 99.0);
    }
}

int main(int argc, const char *argv[])
{
    std::thread t1(crazy_thread, "TID#1");
    std::thread t2(f1, 10, "TID#2");
    std::thread t3(crazy_thread, "TID#3");
    t1.join();
    t2.join();
    t3.join();
    return 0;
}
