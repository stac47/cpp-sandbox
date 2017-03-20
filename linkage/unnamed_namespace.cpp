namespace {

int var1 = 42;

void func1(int a) {}

}

static int var2 = 666;

static void func2(int a) {}

int main(int argc, const char *argv[])
{
    func1(var1);
    func2(var2);
    return 0;
}
