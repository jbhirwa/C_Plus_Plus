#ifndef DOG_HPP
#define DOG_HPP

#include "Polymorphism.hpp"

class dog : public Polymorphism
{
    public:
        dog();
        ~dog();
        void makeSound() const;
};

#endif