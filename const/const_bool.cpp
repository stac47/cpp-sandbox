namespace stac {

const bool kOtherConstBool = true;

int get_1_or_2(bool b)
{
    if (b)
    {
        return 1;
    }
    else
    {
        return 2;
    }
}

} /* namespace stac */

int main(int argc, const char *argv[])
{
    const bool kConstBool = true;
    int i = stac::get_1_or_2(kConstBool);
    int j = stac::get_1_or_2(false);
    int k = stac::get_1_or_2(stac::kOtherConstBool);
    return k + j + i;
}
