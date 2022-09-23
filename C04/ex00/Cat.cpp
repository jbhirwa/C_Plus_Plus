#include "Cat.hpp"

cat::cat() : Polymorphism()
{  
    this->type = "cat";
}

cat::~cat()
{
}

void cat::makeSound() const
{
    std::cout << this->type << " meows" << std::endl;
}