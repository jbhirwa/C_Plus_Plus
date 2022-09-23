#include "brain.hpp"
#include <string>

brain::brain()
{
    std::string thought = "thought";
    for (int i = 0; i <100 ; i++)
    {
        this->ideas[i] = thought.append(std::to_string(i));
        thought = "thought";
    }
    std::cout << "Brain default constructor called" << std::endl;
}

brain::~brain()
{
    std::cout << "brain default destructor" << std::endl;
}
brain::brain(const brain &other)
{
     for (int i = 0; i <100 ; i++)
        this->ideas[i] = other.ideas[i];
    std::cout << "brain copy constructor called" << std::endl;
}

const std::string &brain::getthought(int index) const
{
    return this->ideas[index];
    std::cout << "get brain thought" << std::endl;
}

brain &brain::operator=(const brain &rhs)
{
    if (this != &rhs )
    {
        for (int i = 0; i <100 ; i++)
            this->ideas[i] = rhs.ideas[i];
    }
    //std::cout << "brain assignment operator override ";
    return *this;
}
