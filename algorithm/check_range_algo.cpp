#include <algorithm>
#include <memory>
#include <functional>
#include <iostream>
#include <vector>

class Boolean
{
public:
    Boolean(bool iBool)
    {
        _value = iBool;
    }

    virtual bool getValue() const
    {
        return _value;
    }

private:
    bool _value;
};

class SuperBoolean : public Boolean
{
public:
    SuperBoolean(bool iBool)
      : Boolean(iBool)
    {}

    bool getValue() const override
    {
        std::cout << "Super Boolean value" <<std::endl;
        return Boolean::getValue();
    }
};

int main(int argc, const char *argv[])
{
    std::vector<std::shared_ptr<Boolean>> v;
    std::shared_ptr<Boolean> v1 = std::make_shared<Boolean>(true);
    std::shared_ptr<Boolean> v2 = std::make_shared<SuperBoolean>(true);
    std::shared_ptr<Boolean> v3 = std::make_shared<Boolean>(false);
    SuperBoolean v4(false);
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    v.push_back(std::make_shared<Boolean>(&v4));
    bool result =
        /* std::any_of(v.begin(), v.end(), */
        /* std::any_of(v.begin(), v.end(), */
        std::all_of(v.begin(), v.end(),
                    std::bind(&Boolean::getValue, std::placeholders::_1));
    if (result)
    {
        std::cout << "Result is true" << std::endl;
    }
    else
    {
        std::cout << "Result is false" << std::endl;
    }

    return 0;
}
