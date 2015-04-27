#include <string>
#include <iostream>

#include <boost/algorithm/string.hpp>
#include <boost/range.hpp>

using namespace std;

int main(int argc, const char* argv[]) {
    const string s = "Hello, Laurent!";
    string hello = "hello";
    const string& ref = s;
    boost::iterator_range<string::iterator> result =
        boost::ifind_first(ref, hello);
    if (result) {
        cout << "Sub-string found" << endl;
    }
}
