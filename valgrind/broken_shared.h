#include <cstdlib>

class A
{
    uint32_t longLength_;
    int32_t shortLength_;
public:
    A(): shortLength_(0) {}
    inline uint32_t length() const;
    void setRandom();
};

inline uint32_t A::length() const
{
    return shortLength_ >= 0 ? shortLength_ : longLength_;
}
