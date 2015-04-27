/**
 * @file main.cpp
 * @brief Testing using nested namespace.
 * @author Laurent Stacul
 * @version 1.0
 * @date 2014-11-07
 */

#include <iostream>

namespace one {
namespace two {
    static void f() {
        std::cout << "Hello World" << std::endl;
    }
}
}

int main(int argc, char const * argv[]) {
    {
        one::two::f();
    }
    {
        using namespace one;
        two::f();
    }
    {
        using namespace one;
        using namespace two;
        f();
    }
    {
        using namespace one::two;
        f();
    }

}

