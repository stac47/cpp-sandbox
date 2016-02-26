#include <string>
#include <iostream>

#include "Pet.h"

Pet::Pet(const std::string& iName): name_(iName) {}

Pet::~Pet() {}

const std::string& Pet::getName() const
{
    return name_;
}

namespace {

std::ostream& operator<<(std::ostream& os, const Pet& iPet)
{
    os << iPet.getName() << std::endl;
}

} /* namespace  */

