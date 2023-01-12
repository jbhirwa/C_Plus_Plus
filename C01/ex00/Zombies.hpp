#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    private:
        std::string name; 
    public:
        Zombie();
        ~Zombie();
        void SetName (std::string _name);
        void Announce (void);
       
};
Zombie *newZombie(std::string MallocedName);
void randomChump(std::string UnMallocedName);
#endif
