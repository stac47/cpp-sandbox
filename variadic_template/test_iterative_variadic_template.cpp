#include <iostream>
#include <string>
#include <sstream>
#include <tuple>
#include <utility>

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

template <typename Tup, std::size_t... index>
std::string BuildCompositeStringImpl(Tup tup, std::index_sequence<index...>)
{
    std::ostringstream os;
    for (size_t i = 0; i < sizeof...(index); ++i)
    {
        os << std::get<i>(tup);
    }
    return os.str();
}

template<typename Tup>
std::string BuildCompositeStringHelper(Tup t)
{
    constexpr auto tupleSize = std::tuple_size<typename std::decay<Tup>::type>::value;
    auto index = std::make_index_sequence<tupeSize>();
    return BuildCompositeStringImpl(t, index);
}

template<typename ... Args>
std::string BuildCompositeString(Args&&... args)
{
    auto tup = std::make_tuple(std::forward<Args>(args)...);
    return BuildCompositeStringHelper(tup);
}

int main(int argc, const char *argv[])
{
    std::cout << BuildCompositeString(std::string("toto"), 1, 'a') << std::endl;
    std::cout << BuildCompositeString("toto", 1, 'a') << std::endl;
    std::cout << BuildCompositeString('a') << std::endl;
    std::cout << BuildCompositeString() << std::endl;
    return 0;
}
