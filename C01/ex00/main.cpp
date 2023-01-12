#include "Zombies.hpp"

int main(void)
{
    Zombie  *MallocedZom;
    
    randomChump("Bob");
    MallocedZom = newZombie("James");
    MallocedZom->Announce();
    delete MallocedZom;
}
