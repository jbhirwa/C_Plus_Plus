#ifndef CAT_HPP
#define CAT_HPP

#include "Polymorphism.hpp"

class cat : public Polymorphism
{
    public:
        cat();
        ~cat();
        void makeSound() const;
};

#endif