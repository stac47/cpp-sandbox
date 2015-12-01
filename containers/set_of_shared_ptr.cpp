#include <set>
#include <memory>
#include <iostream>

class A {
public:
    static std::shared_ptr<A> Create()
    {
        return std::shared_ptr<A>(new A());
    }
private:
    A() : _m1(0)
    {}

    int _m1;
};

class Repository
{
public:
    static std::shared_ptr<Repository> GetInstance()
    {
        static std::shared_ptr<Repository> instance;
        if (!instance)
        {
            instance = std::shared_ptr<Repository>(new Repository());
        }
        return instance;
    }

    void insert(const std::shared_ptr<A>& o)
    {
        std::cout << "Number of elements: " << _set.size() << std::endl;
        _set.insert(o);
        std::cout << "Element inserted. Now " << _set.size() << std::endl;
    }

private:
    std::set<std::shared_ptr<A>> _set;
};

class B {
    std::shared_ptr<A> _aptr;
public:
    B() : _aptr(A::Create())
    {
        std::cout << "Build B" << std::endl;
        Repository::GetInstance()->insert(_aptr);
    }

    void f()
    {
        std::cout << _aptr.get() << std::endl;
    }
};

int main(int argc, const char * argv[])
{
    B b;
    b.f();
    return 0;
}
