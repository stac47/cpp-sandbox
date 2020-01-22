#include <cstdint>
#include <cstdlib> // rand
#include <ctime>
#include <iostream>

class A
{
public:
    A(): fShortLength(0), fFlags(2) {}
    inline uint32_t length() const;
    inline void setLength(uint32_t length);
private:
    union StackBufferOrFields {
      unsigned char fStackBuffer[8];
      struct {
        unsigned char *fArray;
        int32_t fCapacity;
        int32_t fLength;
      } fFields;
    } fUnion;
    int8_t fShortLength;
    uint8_t fFlags;
};

inline uint32_t A::length() const
{
    return fShortLength>=0 ? fShortLength : fUnion.fFields.fLength;
}

inline void A::setLength(uint32_t length)
{
    if (length >=128)
    {
        fShortLength = static_cast<int8_t>(-1);
        fUnion.fFields.fLength = length;
    }
    else
    {
        fShortLength = static_cast<uint8_t>(length);
    }
}

int main(int argc, const char *argv[])
{
    std::srand(std::time(nullptr));
    enum { BUFLEN = 128 };
    if (std::rand() % 2 == 0)
    {
        A a;
        if (a.length() >= BUFLEN)
        {
            std::cout << "ERROR" << std::endl;
        }
        else
        {
            std::cout << "OK" << std::endl;
        }

    }
    return 0;
}
