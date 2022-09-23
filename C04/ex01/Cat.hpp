#ifndef CAT_HPP
#define CAT_HPP

#include "Polymorphism.hpp"
#include "brain.hpp"

class cat : public Polymorphism
{
    public:
        cat();
        ~cat();
        cat(std::string type);
        cat(const cat &other);
        cat& operator=(const cat &rhs);
        void makeSound() const;
        brain *getbrain() const;
    private:
        brain *_brain;
};

#endif