#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
    string s("Hello world !");
    cout << s.substr(2, 4) << endl;
    cout << s.substr(2) << endl;
    const char spaceChar = ' ';
    cout << "Number of spaces: " << count(s.begin(), s.end(), spaceChar) << endl;
    return 0;
}
