#include "Zombies.hpp"

int main(void)
{
    Zombie  *MallocedZom;

    //randomChump("Bob");
    MallocedZom = zombieHorde(5, "james");//newZombie("James");
    for (int i = 0; i < 5; i++)
        {
            MallocedZom[i].Announce();
        }
    delete [] MallocedZom;
}