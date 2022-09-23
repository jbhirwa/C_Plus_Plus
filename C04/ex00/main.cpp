#include "Polymorphism.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main() 
{
    const Polymorphism* meta = new Polymorphism(); 
    const Polymorphism* j = new dog();
    const Polymorphism* i = new cat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl; 
    i->makeSound(); //will output the cat sound! j->makeSound();
    j->makeSound(); //will output the cat sound! j->makeSound();
    meta->makeSound();

    return 0; 
}