#include "Zombies.hpp"

int main(void)
{
    Zombie  *MallocedZom;
    
    randomChump("Bob");
    MallocedZom = newZombie("James");
    MallocedZom->Announce();
    delete MallocedZom;
}

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