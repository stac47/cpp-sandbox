#include <cstdint>
#include <ctime>
#include <cstdlib>

#include "broken_shared.h"

void A::setRandom()
{
    std::srand(std::time(nullptr));
    int random_variable = std::rand();
    if (random_variable < RAND_MAX / 2)
    {
        if (random_variable < 127)
        {
            shortLength_ = random_variable;
        }
        else
        {
            shortLength_ = 42;
        }
    }
    else
    {
        longLength_ = random_variable;
        shortLength_ = (int32_t)-1;
    }
}

