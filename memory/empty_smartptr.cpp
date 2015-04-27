#include <memory>
#include <iostream>

using namespace std;

int main(int argc, const char* argv[]) {
    unique_ptr<int> p;
    if (p) {
        cout << "Should not be here." << endl;
    }
    else {
        cout << "Null pointer" << endl;
    }
    return 0;
}
