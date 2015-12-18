#include <string>
#include <iostream>

namespace {

void Display(const std::string& iText)
{
    std::cout << iText << std::endl;
}

} // namespace

namespace stac {
namespace cpp {

void DisplayLongText()
{
    Display("This is a long long boring text, indeed so long I am not able to find something interesting to say. So yes it is a long text that should be wrapped by the formatter. Let's see what will happen !");
}

class Displayer
{
    std::string _name;
    static int NumberOfDisplayedMessages;
public:
    Displayer(const std::string& iName)
      : _name(iName) {}

    void display(const std::string& iText);

    inline const std::string& getName() {return _name;}
};

int Displayer::NumberOfDisplayedMessages = 0;

void Displayer::display(const std::string& iText)
{
    if (NumberOfDisplayedMessages % 2 == 0)
        Display(_name + " says:");
    Display(iText);
    NumberOfDisplayedMessages++;
}

} // namespace cpp
} // namespave stac

int main(int argc, const char* argv[])
{
    stac::cpp::DisplayLongText();
    stac::cpp::Displayer d("Stac");
    d.display("Hello World");
}



