/******************************************************************************
 *
 * @author: lstacul
 * @date: 2014-10-16
 * @description: Testing a way to split a string.
 *
 ******************************************************************************/

#include <string>
#include <vector>
#include <iostream>
#include <sstream>
#include <algorithm>
#include <boost/algorithm/string.hpp>

using namespace std;

int main(int argc, char** argv) {
  string s("var:ia::ble");
  // With boost
  vector<string> strs1;
  cout << strs1.size() << endl;
  boost::split(strs1,s, boost::is_any_of(":"));
  for(vector<string>::iterator it = strs1.begin(); it != strs1.end(); ++it) {
    cout << *it << endl;
  }

  // Only the STL
  vector<string> strs2;
  stringstream ss(s);
  string item;
  while (getline(ss, item, ':')) {
    strs2.push_back(item);
  }
  for(vector<string>::iterator it = strs2.begin(); it != strs2.end(); ++it) {
    cout << *it << endl;
  }

}
