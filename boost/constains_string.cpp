#include <string>
#include <iostream>
#include <set>

#include <boost/algorithm/string/classification.hpp>
#include <boost/algorithm/string/predicate.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/algorithm/cxx11/any_of.hpp>

using namespace std;

static const set<char> kVoyelChars = boost::assign::list_of
    ('a') ('e') ('i') ('o') ('u') ('y');

bool isVoyel(char c) {
    return kVoyelChars.find(c) != kVoyelChars.end();
}

int main(int argc, const char* argv[]) {
    string s = "Laurent Stacul";
    if (boost::algorithm::any_of(s, isVoyel)) {
        cout << "Found" << endl;
    }
}
