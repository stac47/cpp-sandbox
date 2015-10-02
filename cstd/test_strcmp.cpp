#include <cstring>
#include <iostream>

int main(int argc, const char ** argv)
{
    const char * toto = "titi";
    const char * titi = "titi";
    const char * tata = "tata";

    std::cout << !strcmp(toto, titi) << std::endl;
    std::cout << strcmp(toto, tata) << std::endl;

    if (!strcmp(toto, titi) ||
            !strcmp(toto, tata))
    {
        std::cout << "IN" << std::endl;
    }
    std::cout << "OUT" << std::endl;
    return 0;
}

