#include <set>
#include <iostream>

#include <boost/assign/list_of.hpp>

using namespace std;

int main(int argc, const char* argv[]) {
    const set<int> s = boost::assign::list_of (1) (2) (3);
    for (set<int>::iterator it = s.begin(); it != s.end(); ++it) {
        cout << (*it) << endl;
    }
    if (s.find(3) != s.end()) {
        cout << "3 is in the set" << endl;
    }
}
