#include <string>
#include <iostream>
#include <memory>

#define RAPIDJSON_HAS_STDSTRING 1
#include <rapidjson/document.h>
#include <rapidjson/pointer.h>

int main(int argc, const char *argv[])
{
    std::string jsonStr = "{\"a\":1}";
    rapidjson::Document doc;
    doc.Parse(jsonStr);
    const rapidjson::Value& a = doc["a"];
    (void) (1 == a);
    /* (void) (a == 1); */
    return 0;
}
