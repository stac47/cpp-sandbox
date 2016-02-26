#include <string>
#include <iostream>
#include <memory>

#define RAPIDJSON_HAS_STDSTRING 1
#include <rapidjson/document.h>
#include <rapidjson/pointer.h>

int main(int argc, const char *argv[])
{
    std::string jsonStr = "[1, 2, 3]";
    rapidjson::Document doc;
    doc.Parse(jsonStr);
    return 0;
}
