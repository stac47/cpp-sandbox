#include <vector>
#include <iostream>
#include <type_traits>

template<typename T>
using is_collection = std::is_same<T, std::vector<typename T::value_type,
                                                  typename T::allocator_type>>;

template<typename T>
typename std::enable_if<not is_collection<T>::value>::type
func(const T&)
{
    std::cout << "const T&" << std::endl;
}

template<typename T>
typename std::enable_if<is_collection<T>::value>::type
func(const T&)
{
    std::cout << "const std::vector<T>&" << std::endl;
}

int main(int argc, const char *argv[])
{
    std::vector<int> v;
    func(v);
    return 0;
}
