#include <memory>
#include <iostream>
#include <string>

typedef std::shared_ptr<std::string> StringPtr;

class A {
public:
    void setSharedPtr(const StringPtr& iString)
    {
        _s = iString;
    }

    void display() const
    {
        std::cout << *_s << std::endl;
    }
private:
    StringPtr _s;
};

void f(A& a)
{
    StringPtr s = std::make_shared<std::string>("Hello World !");
    a.setSharedPtr(s);
}

int main(int argc, const char* argv[])
{
    A a;
    f(a);
    a.display();
}


