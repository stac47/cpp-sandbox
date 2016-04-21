#include <iostream>
#include <string>
#include <sstream>

class BuildCompositeStringHelper
{
public:
    std::string operator()()
    {
        return "";
    }

    template<typename T, typename ... Args>
    std::string operator()(T&& s, Args&&... args)
    {
        os_ << std::forward<T>(s);
        (*this)(std::forward<Args>(args)...);
        return os_.str();
    }

private:
    std::ostringstream os_;
};

std::string BuildCompositeString()
{
    return "";
}

template<typename T, typename ... Args>
std::string BuildCompositeString(T&& s, Args&&... args)
{
    return BuildCompositeStringHelper()(std::forward<T>(s), std::forward<Args>(args)...);
}

int main(int argc, const char *argv[])
{
    std::cout << BuildCompositeString(std::string("toto"), 1, 'a') << std::endl;
    std::cout << BuildCompositeString("toto", 1, 'a') << std::endl;
    std::cout << BuildCompositeString('a') << std::endl;
    std::cout << BuildCompositeString() << std::endl;
    return 0;
}
