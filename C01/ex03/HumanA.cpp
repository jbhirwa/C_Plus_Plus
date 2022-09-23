/* In the main You can create an object  */
// Whenever possible everything is sent as a reference.

//if teh variables are not private fields but the variable should not be changed once set... then set it as const
#include "HumanA.hpp"
HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(&weapon)
{
}

HumanA::~HumanA()
{
}

void    HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
}

void    HumanA::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}