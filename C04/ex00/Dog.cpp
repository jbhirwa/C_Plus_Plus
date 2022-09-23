#include "Dog.hpp"

dog::dog() : Polymorphism()
{  
    this->type = "dog";
}

dog::~dog()
{
}

void dog::makeSound() const
{
    std::cout << this->type << " Woof" << std::endl;
}