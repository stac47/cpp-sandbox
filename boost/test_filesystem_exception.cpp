#include <iostream>
#include <string>

#include <boost/filesystem.hpp>

int main(int argc, char *argv[])
{
  try {
    std::string filename = "/home/ubuntu/development/cpp-sandbox/boost/test.tmp";
    boost::filesystem::copy(boost::filesystem::path(filename),
                            boost::filesystem::path(filename));
  } catch (const boost::filesystem::filesystem_error& e) {
    std::cout << "### Boost filesystem_error: " << e.what() << std::endl;
  } catch (...) {
    std::cout << "Unknown exception" << std::endl;
  }
  return 0;
}
