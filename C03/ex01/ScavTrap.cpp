#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this._Name = "No Name";
    this->_HitPoint = 100;
    this->_EnergyPoints = 50;
    this->_AttackDamage = 20;
    std::cout << "derived constructor" << std::endl;
}

ScavTrap::ScavTrap(const std::string AssignName) : ClapTrap(AssignName)
{
    std::cout << AssignName << "derived constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap &originalScavTrap) : ClapTrap(originalScavTrap)
{
    this->_Name = originalScavTrap._Name;
    this->_AttackDamage = originalScavTrap._AttackDamage;
    this->_EnergyPoints = originalScavTrap._EnergyPoints;
    this->_HitPoint = originalScavTrap._HitPoint;
}
ScavTrap::~ScavTrap()
{
    std::cout << "derived destructor called" <<std::endl;

}

void    ScavTrap::attack(const std::string& target)
{
    if (this->_HitPoint > 0 || this->_EnergyPoints > 0)
    {
        //this._HitPoint = this._HitPoint - this._AttackDamage;
        this->_EnergyPoints -= 1;
        std::cout << "ScavTrap " << this->_Name << " attacks" << target << ", causing "<< _AttackDamage << "points of damage!" << std::endl;
    }
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
}