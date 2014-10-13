#include <string>
#include <iostream>

using namespace std;

int main() {
    string s("Hello world !");
    cout << s.substr(2, 4) << endl;
    cout << s.substr(2) << endl;
    return 0;
}
