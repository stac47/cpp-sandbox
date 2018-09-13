#include <iostream>

static std::string my_static_string;
extern std::string my_extern_string;

/* std::string my_extern_string; */

void change_string(std::string& s, const std::string& value)
{
    std::cout << "--------" << std::endl;
    std::cout << s << std::endl;
    std::cout << "--------" << std::endl;
    s = value;
    std::cout << s << std::endl;
    std::cout << "--------" << std::endl;
}

int main(int argc, const char *argv[])
{
    change_string(my_static_string, "static");
    change_string(my_extern_string, "extern");
    return 0;
}
