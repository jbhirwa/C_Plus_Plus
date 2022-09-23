#ifndef DOG_HPP
#define DOG_HPP

#include "Polymorphism.hpp"
#include "brain.hpp"

class dog : public Polymorphism
{
    public:
        dog();
        ~dog();
        dog(std::string type);
        dog(const dog &other);
        dog& operator=(const dog &rhs);
        void makeSound() const;
        brain *getbrain() const;
    private:
        brain *_brain;
};

#endif