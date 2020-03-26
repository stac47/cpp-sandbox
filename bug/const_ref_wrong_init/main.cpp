#include <map>

void f() {
    using MyMap = typename std::map<std::tuple<int, int>, int>;
    using KeyType = typename MyMap::key_type;
    MyMap m;

    m[std::make_tuple(1,2)] = 42;
    std::map<int, int>::iterator it = m.begin();
    const KeyType& r(it->first);
}
