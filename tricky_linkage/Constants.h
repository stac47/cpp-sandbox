template <typename T>
void foo(const T& a) { /* code */ }

class Constants
{
public:
   static const int kInt = 19;
   void func()
   {
      foo(kInt);           // This is the important line
   }
};
