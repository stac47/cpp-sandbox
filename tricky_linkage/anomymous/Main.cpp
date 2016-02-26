#include <string>
#include <iostream>

#include "Pet.h"

std::ostream& operator<<(std::ostream& os, const Pet& iPet)
{
    os << iPet.getName() << std::endl;
}

int main(int argc, const char* argv[])
{
    Pet pet("Paul");
    std::cout << pet;
}
