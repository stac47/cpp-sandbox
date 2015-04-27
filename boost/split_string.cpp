#include <string>
#include <iostream>
#include <vector>

#include <boost/algorithm/string/split.hpp>
#include <boost/algorithm/string/classification.hpp>

using namespace std;

int main(int argc, const char* argv[]) {
    vector<string> result;
    string s = "name=value; name2=value2;;name3=value3";
    boost::algorithm::split(result, s, boost::algorithm::is_any_of("; "));

    cout << "Size of result: " << result.size() << endl;
}

