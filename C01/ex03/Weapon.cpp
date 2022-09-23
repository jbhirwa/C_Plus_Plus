#include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string _type)
{
    this->setType(_type);
}

Weapon::~Weapon()
{
}

void Weapon::setType(std::string _type)
{
    this->type = _type;
}

std::string const &Weapon::getType()
{
    return (type);
}
