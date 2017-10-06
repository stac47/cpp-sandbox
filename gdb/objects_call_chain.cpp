struct A
{
    A(): i_(2) {}

    int a()
    {
        i_++;
        return i_;
    }
    int i_;
};

struct B
{
    A a_;
    int g()
    {
        return a_.a();
    }
};

int main(int argc, const char *argv[])
{
    B b;
    b.g();
    return 0;
}


