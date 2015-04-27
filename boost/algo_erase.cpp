#include <string>

#include <boost/algorithm/string.hpp>

using namespace std;

int main(int argc, const char* argv[]) {
    string s = "Expires= tomorrow ";
    cout << boost::trim_copy(boost::ierase_first_copy(s, "Expires=")) << endl;
}

