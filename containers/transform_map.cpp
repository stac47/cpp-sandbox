#include <iostream>
#include <map>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>

using namespace std;

template<char C>
string concat(pair<string, string> p) {
    string res = p.first;
    if (!p.second.empty()) {
        res += C + p.second;
    }
    return res;
}

int main(int argc, const char* argv[]) {
    map<string, string> aMap;
    aMap["Laurent"] = "Stacul";
    aMap["Seb"] = "Stacul";
    aMap["Stef"] = "Drevet";
    vector<string> v(aMap.size());
    transform(aMap.begin(), aMap.end(), v.begin(), concat<':'>);

    for(auto s : v) {
        cout << s << endl;
    }
}


