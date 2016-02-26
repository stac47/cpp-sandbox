#include <string>
#include <iostream>
#include <memory>

#define RAPIDJSON_HAS_STDSTRING 1
#include <rapidjson/document.h>
#include <rapidjson/allocators.h>
#include <rapidjson/writer.h>
#include <rapidjson/stringbuffer.h>

int main(int argc, const char *argv[])
{
    auto p = std::make_unique<rapidjson::Document>(rapidjson::kObjectType);
    rapidjson::Document doc;
    doc.SetArray();
    doc.PushBack("Hello", doc.GetAllocator());
    doc.PushBack("World", doc.GetAllocator());
    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> w(buffer);
    doc.Accept(w);
    std::cout << buffer.GetString() << std::endl;
    return 0;
}
