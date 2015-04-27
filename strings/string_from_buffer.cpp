#include <string>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[]) {
    vector<char> buffer;
    buffer.push_back('A');
    buffer.push_back(0);
    buffer.push_back(0);
    string s(buffer.begin(), buffer.end());
    cout << "Buffer size: " << s.size() << endl;
    const char* cs = s.c_str();
    string s1(cs);
    cout << "String from C string size: " << s1.size() << endl;
    string s2(buffer.begin(), find(buffer.begin(), buffer.end(), 0));
    cout << "String from algo: " << s2.size() << endl;

    buffer.push_back('Z');
    string ss(buffer.begin(), buffer.end());
    cs = ss.c_str();
    string ss1(cs);
    cout << "String from C string size: " << ss1.size() << endl;
    string ss2(buffer.begin(), find(buffer.begin(), buffer.end(), 0));
    cout << "String from algo: " << ss2.size() << endl;
    return 0;
}
