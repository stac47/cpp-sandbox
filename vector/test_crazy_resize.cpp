#include <boost/container/vector.hpp>
#include <iostream>
#include <vector>

using namespace std;
namespace bc = boost::container;

// Allocator adaptor that interposes construct() calls to
// convert value initialization into default initialization.
template <typename T, typename A=std::allocator<T>>
class default_init_allocator : public A {
  typedef std::allocator_traits<A> a_t;
public:
  template <typename U> struct rebind {
    using other =
      default_init_allocator<
        U, typename a_t::template rebind_alloc<U>
      >;
  };

  using A::A;

  template <typename U>
  void construct(U* ptr)
    noexcept(std::is_nothrow_default_constructible<U>::value) {
    ::new(static_cast<void*>(ptr)) U;
  }
  template <typename U, typename...Args>
  void construct(U* ptr, Args&&... args) {
    a_t::construct(static_cast<A&>(*this),
                   ptr, std::forward<Args>(args)...);
  }
};


template <typename VecType>
void init_vec(VecType &v)
{
    // fill v with values [0, 1, 2, 3, 4, 5, 6, 7, 8, 9]
    for (size_t i = 0; i < 10; ++i) v.push_back(i);
    // chop off the end of v, which now should be [1, 2, 3, 4, 5], but the other 5 values
    // should remain in memory
    v.resize(5);
}

template <typename VecType>
void print_vec(const char *label, VecType &v)
{
    cout << label << ": ";
    for (size_t i = 0; i < v.size(); ++i)
    {
        cout << v[i] << ' ';
    }
    cout << endl;
}

int main()
{
    // instantiate a vector of each type that we're going to test
    std::vector<int, default_init_allocator<int>> std_vec;
    bc::vector<int> boost_vec;
    bc::vector<int> boost_vec_default;

    // fill each vector in the same way
    init_vec(std_vec);
    init_vec(boost_vec);
    init_vec(boost_vec_default);

    // now resize each vector to 10 elements in ways that *should* avoid reinitializing the new elements
    std_vec.resize(10);
    boost_vec.resize(10);
    boost_vec_default.resize(10, bc::default_init);

    // print each one out
    print_vec("std", std_vec);
    print_vec("boost", boost_vec);
    print_vec("boost w/default", boost_vec_default);
}
