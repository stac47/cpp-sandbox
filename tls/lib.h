#include <atomic>

//#define STAC_TLS
#define STAC_TLS __thread

template <template <typename> class Atom = std::atomic>
struct A {
    static uint8_t fromTLS(int i) {
        return array[i][m.f()];
    }
private:
    static uint8_t array[3][3];
    class M {
    public:
        uint8_t f() {
            return i_;
        }
    private:
        int i_{2};
    };
    static STAC_TLS M m;
    static bool initialized;
    static bool initialize() {
        for (int i = 0; i < 3; ++i) {
            for (int j = 0; j < 3; ++j) {
                array[i][j] = i * j;
            }
        }
        return true;
    }
};

template <template <typename> class Atom>
uint8_t A<Atom>::array[3][3] = {};

template <template <typename> class Atom>
STAC_TLS typename A<Atom>::M A<Atom>::m;

template <template <typename> class Atom>
bool A<Atom>::initialized = A<Atom>::initialize();

int dummy();
