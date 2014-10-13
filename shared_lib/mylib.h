#ifndef MYLIB_H
#define MYLIB_H 

#include <string>

namespace stac {

class Greeter {

public:
    Greeter(std::string name);

    void sayHello();

private:
    std::string _name;
};

}

#endif /* MYLIB_H */
