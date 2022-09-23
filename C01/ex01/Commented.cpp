
/*
#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name; 
    public:
        Zombie(std::string _name);
        ~Zombie();
        //void SetName (std::string _name);
        void Announce (void);
       
};
#endif
*/


/*
//Accessing the Zombie class defined in header file
#include "Zombies.hpp"

Zombie::Zombie(std::string _name)
{
    name = _name;
}
Zombie::~Zombie()
{
    std::cout << name << "was destroyed *mic drop*" << std::endl;
}
void Zombie::SetName (std::string _name)
{
    name = _name;
}
void Zombie::Announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}   
*/


/*
int main(void)
{

    std::string UnMallocedName;
    std::cout << "Name the Zombie: " << std::endl;
    std::cin >> UnMallocedName;

    Zombie UnMallocedZom = Zombie("Bob");
    UnMallocedZom::SetName(UnMallocedName);


    std::string MallocedName;
    std::cout << "Name the Zombie: " << std::endl;
    std::cin >> MallocedName;

    Zombie *MallocedZom;
    MallocedZom = new Zombie("James");// ::SetName(MallocedName);
    //UnMallocedZom::SetName(UnMallocedName);
    UnMallocedZom.Announce();
    MallocedZom->Announce();
}
*/