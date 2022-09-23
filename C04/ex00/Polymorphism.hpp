#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

# include<iostream>

class Polymorphism
{
    public:
        virtual void makeSound() const;
        Polymorphism();
        ~Polymorphism();
        std::string getType() const;

    protected:
        std::string type;
};

#endif