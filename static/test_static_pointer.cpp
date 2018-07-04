#include <memory>
#include <iostream>

class Object {
public:
    Object()
      : _i(42)
    {
        std::cout << "Object::Object()" << std::endl;
    }
private:
    int _i;
};

std::shared_ptr<Object> ptr(new Object());

__attribute__((constructor(300)))
void init_opts()
{
    ptr.reset(new Object());
}


int main(int argc, const char *argv[])
{
    ptr.reset();
    return 0;
}
