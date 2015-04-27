template <typename T>
void foo(const T& a) { /* code */ }

class Bar
{
public:
   static const int kConst;
   void func()
   {
      foo(kConst);           // This is the important line
   }
};

const int Bar::kConst = 1;

int main()
{
   Bar b;
   b.func();
}
