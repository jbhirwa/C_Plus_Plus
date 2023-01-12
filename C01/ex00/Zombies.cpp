#include "Zombies.hpp"

Zombie::Zombie()
{

}
Zombie::~Zombie()
{
    std::cout << name << " was destroyed *mic drop*" << std::endl;
}
void Zombie::SetName (std::string _name)
{
    name = _name;
}
void Zombie::Announce (void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}   

Zombie *newZombie(std::string MallocedName)
{
    Zombie *MallocedZom;
    MallocedZom = new Zombie;
    MallocedZom->SetName(MallocedName);
    return (MallocedZom);
}

void randomChump(std::string UnMallocedName)
{
    Zombie UnMallocedZom;
    UnMallocedZom.SetName(UnMallocedName);
    UnMallocedZom.Announce();
}