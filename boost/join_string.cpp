#include <string>
#include <vector>
#include <iostream>

#include <boost/algorithm/string/join.hpp>

using namespace std;
using namespace boost::algorithm;

int main(int argc, const char* argv[]) {
    vector<string> v;
    v.push_back("Laurent");
    v.push_back("Stephanie");
    cout << join(v, " & ") << endl;
}


