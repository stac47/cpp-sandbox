#include <iostream>
#include <vector>

using namespace std;

int main(int argc, const char* argv[]) {
    vector<int> v(10);
    for (int i=0; i < 10; ++i) {
        v[i] = 2 * i;
    }
    cout << "Size: " << v.size() << endl;
    v.resize(5);
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;
    cout << "ReSize: " << v.size() << endl;
}

