#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"
# include <iostream>



class HumanA
{
    private:
        std::string _name;
        Weapon      *_weapon;

    public:
        HumanA(std::string name, Weapon &weapon);// when you recieve weapon... treat it as a reference
        ~HumanA();
        void        attack();
        void        setWeapon(Weapon &weapon);

};
#endif