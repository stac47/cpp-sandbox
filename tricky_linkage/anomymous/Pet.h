#pragma once

#include <string>

class Pet
{
public:
    Pet(const std::string& iName);
    ~Pet();

    const std::string& getName() const;

private:
    std::string name_;
};
