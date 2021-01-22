#include <utility>

#include <boost/compressed_pair.hpp>
#include <iostream>

class Empty {};


int main(int, char *[])
{
    Empty e;
    std::pair<std::pair<Empty, int>, int> p1 { {e,2}, {3}};
    boost::compressed_pair<boost::compressed_pair<Empty, int>, int> p2 { {e,2}, {3}};
    return 0;
}
