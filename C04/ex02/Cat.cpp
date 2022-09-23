#include "Cat.hpp"

cat::cat() : Polymorphism(), _brain(new brain())
{  
    this->type = "cat";
    std::cout << "default cat constructor" << std::endl;
}

cat::cat(std::string type) : Polymorphism(), _brain(new brain())
{  
    this->type = type;
    std::cout << "default type constructor" << std::endl;
}

cat::cat(const cat &other) : Polymorphism(other)
{
    this->_brain = other._brain;
    std::cout << "copy constructor called" << std::endl;
}

cat::~cat()
{
    delete this->_brain;
    std::cout << "default destructor called" << std::endl;
}

void cat::makeSound() const
{
    std::cout << this->type << " meows" << std::endl;
}

brain *cat::getbrain() const
{
    return this->_brain;
}

cat &cat::operator=(const cat &rhs)
{
    this->_brain = new brain(*rhs._brain);
    this->type = rhs.type;
    return *this;
}