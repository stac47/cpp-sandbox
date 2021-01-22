namespace N1 {
  struct S {};
  template<int X> void f(S){}
}

namespace N2 {
  template<class T> void f(T t){}
}

void g(N1::S s) {
  f<3>(s);      // Syntax error until C++20 (unqualified lookup finds no f)
  N1::f<3>(s);  // OK, qualified lookup finds the template 'f'
  //N2::f<3>(s);  // Error: N2::f does not take a non-type parameter
                //        N1::f is not looked up because ADL only works
                //              with unqualified names
  using N2::f;
  f<3>(s); // OK: Unqualified lookup now finds N2::f
           //     then ADL kicks in because this name is unqualified
           //     and finds N1::f
}

int main(int argc, char *argv[])
{
    N1::S s;
    g(s);
    return 0;
}
