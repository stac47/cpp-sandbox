#include <memory>

class Object {
public:
    Object()
      : _i(42)
    {}
private:
    int _i;
};

extern std::shared_ptr<Object> ptr;
