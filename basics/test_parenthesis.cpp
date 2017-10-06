#include <iostream>
#include <iomanip>

#define TEST(_test_)                                       \
    do                                                     \
    {                                                      \
        std::cout << "Test [" << #_test_ << "]: "          \
            << std::boolalpha << (_test_) << std::endl;    \
    }                                                      \
    while(false);

int main(int argc, const char *argv[])
{
    TEST(true && 1);
    TEST(true && 1 == 0);
    TEST(true && 1 - 1 == 0);
    TEST(true && true == false);
    TEST(false || true == false);
    TEST(false || 1);
    return 0;
}
