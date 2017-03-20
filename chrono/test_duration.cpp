#include <iostream>
#include <chrono>

int main(int argc, const char *argv[])
{
    std::chrono::milliseconds d1(2000);
    std::chrono::seconds d1_in_s = std::chrono::duration_cast<std::chrono::seconds>(d1);
    std::cout << d1_in_s.count() << " s" << std::endl;
    std::chrono::seconds d2(1);
    if (d1 > d2)
    {
        std::cout << "Great" << std::endl;
    }
    else
    {
        std::cout << "Game over" << std::endl;
    }

    return 0;
}
