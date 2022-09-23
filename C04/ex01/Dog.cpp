#include "Dog.hpp"

dog::dog() : Polymorphism(), _brain(new brain())
{  
    this->type = "dog";
    std::cout << "default dog constructor" << std::endl;
}

dog::dog(std::string type) : Polymorphism(), _brain(new brain())
{  
    this->type = type;
    std::cout << "default type constructor" << std::endl;
}

dog::dog(const dog &other) : Polymorphism(other)
{
    this->_brain = other._brain;
    std::cout << "copy constructor called" << std::endl;
}

dog::~dog()
{
    delete this->_brain;
    std::cout << "default destructor called" << std::endl;
}

void dog::makeSound() const
{
    std::cout << this->type << " Woof" << std::endl;
}

brain *dog::getbrain() const
{
    return this->_brain;
}

dog &dog::operator=(const dog &rhs)
{
    this->_brain = new brain(*rhs._brain);
    this->type = rhs.type;
    return *this;
}