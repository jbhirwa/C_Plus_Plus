#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_Name = "No Name";
    this->_HitPoint = 100;
    this->_EnergyPoints = 100;
    this->_AttackDamage = 30;
    std::cout << "derived constructor" << std::endl;
}

FragTrap::FragTrap(const std::string AssignName) : ClapTrap(AssignName)
{
    std::cout << AssignName << "derived constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap &originalFragTrap) : ClapTrap(originalFragTrap)
{
    this->_Name = originalFragTrap._Name;
    this->_AttackDamage = originalFragTrap._AttackDamage;
    this->_EnergyPoints = originalFragTrap._EnergyPoints;
    this->_HitPoint = originalFragTrap._HitPoint;
}
FragTrap::~FragTrap()
{
    std::cout << "derived destructor called" <<std::endl;

}

void FragTrap::highFivesGuys()
{
    std::cout << "Pretty please give me a hi five. *POSITIVE REINFORCEMENT!!*." << std::endl;
}