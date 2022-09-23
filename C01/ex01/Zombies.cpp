#include "Zombies.hpp"

Zombie::Zombie(){}

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

Zombie *zombieHorde(int n, std::string name)
{
    Zombie *MallocedZom;
    MallocedZom = new Zombie[n];
    for (int i = 0; i < n; i++)
    {
        MallocedZom[i].SetName(name + std::to_string(i));
    }
        return (MallocedZom);
}