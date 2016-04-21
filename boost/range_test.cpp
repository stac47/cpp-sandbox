#include <vector>
#include <iostream>
#include <iterator>
#include <set>

#include <boost/range/irange.hpp>
#include <boost/range/algorithm/copy.hpp>
#include <boost/range/algorithm/set_algorithm.hpp>
#include <boost/range/algorithm_ext/iota.hpp>

int main(int argc, const char *argv[])
{
    std::set<uint16_t> s;
    s.insert(2);
    s.insert(4);

    std::vector<uint16_t> result;
    boost::set_difference(boost::irange(0, 10), s, std::back_inserter(result));

    boost::copy(
        result,
        std::ostream_iterator<long>(std::cout, ","));
    return 0;
}
