#include <map>

namespace {
    std::map<int, int>* gMap = new std::map<int, int>;
} /* namespace  */

int main(int argc, const char *argv[])
{
    gMap->insert(std::make_pair<int, int>(1, 2));
    gMap->erase(1);
    delete gMap;
    //delete aMap;
    return 0;
}
