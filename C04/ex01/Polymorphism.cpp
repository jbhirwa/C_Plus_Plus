#include "Polymorphism.hpp"

    Polymorphism::Polymorphism()
    {
        std::cout << "default constructor ";
        this->type = "default";
        std::cout << std::endl;
    }

    Polymorphism::~Polymorphism()
    {
    }

    void Polymorphism::makeSound() const
    {
        std::cout << "DEFAULT makes a" << this->type << "sound." << std::endl;
    }
    
    std::string Polymorphism::getType() const
    {
        return this->type;
    }