#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>
class ClapTrap
{
    public:
        ClapTrap(); 
        ClapTrap(const std::string AssignName);
        ClapTrap(ClapTrap &originalClapTrap);
        ~ClapTrap();
        //void    getName();
        //void    setName(std::string const Name);
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
    private:
        std::string _Name;
        int         _HitPoint;
        int         _EnergyPoints;
        int         _AttackDamage;
};

#endif