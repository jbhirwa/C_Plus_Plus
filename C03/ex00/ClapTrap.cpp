#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _Name("No Name"), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << "default constructor called" <<std::endl;
}
ClapTrap::~ClapTrap()
{
    std::cout << "destructor called" <<std::endl;
}
ClapTrap::ClapTrap(const std::string AssignName): _Name(AssignName), _HitPoint(10), _EnergyPoints(10), _AttackDamage(0)
{
    std::cout << AssignName << "constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap &orignalClapTrap)
{
    this->_Name = orignalClapTrap._Name;
    this->_AttackDamage = orignalClapTrap._AttackDamage;
    this->_EnergyPoints = orignalClapTrap._EnergyPoints;
    this->_HitPoint = orignalClapTrap._HitPoint;
}

void   ClapTrap::attack(const std::string& target)
{
    if (this->_HitPoint > 0 || this->_EnergyPoints > 0)
    {
        //this._HitPoint = this._HitPoint - this._AttackDamage;
        this->_EnergyPoints -= 1;
        std::cout << "ClapTrap " << this->_Name << " attacks" << target << ", causing "<< _AttackDamage << "points of damage!" << std::endl;
    }
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->_AttackDamage += amount;
    if (amount > this->_HitPoint)
    {
        std::cout << this->_Name << " Has taken too much damage and is dead" << _AttackDamage << std::endl;
    }
    else
    {
        _HitPoint -= amount;
        std::cout << this->_Name << " Has taken damage. Status Report (Damage: " << _AttackDamage << ", Health: " << _HitPoint << ", Energy: " << _EnergyPoints << ")"<< std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_HitPoint > 0 && this->_EnergyPoints > amount)
    {
        this->_HitPoint += amount;
        this->_EnergyPoints -=1;
        std::cout << "You were close to bing unalived" << std::endl;
    }
    else
        std::cout << "YOU'RE ALREADY DEAD! respectfully." << std::endl;
}