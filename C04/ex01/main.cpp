// #include "Polymorphism.hpp"
// #include "Cat.hpp"
// #include "Dog.hpp"

// int main() 
// {
//     const Polymorphism* meta = new Polymorphism(); 
//     const Polymorphism* j = new dog();
//     const Polymorphism* i = new cat();

//     std::cout << j->getType() << " " << std::endl; 
//     std::cout << i->getType() << " " << std::endl; 
//     i->makeSound(); //will output the cat sound! j->makeSound();
//     j->makeSound(); //will output the cat sound! j->makeSound();
//     meta->makeSound();

//     return 0; 
// }

#include "Cat.hpp"
#include "Dog.hpp"
#include <iomanip>

int main()
{
	Polymorphism* Polymorphisms[10];
	
	for (int i = 0; i < 10; i++)
	{
		if (i >= 5)
			Polymorphisms[i] = new dog();
		else
			Polymorphisms[i] = new cat();
	}
	cat copy(*(cat *)Polymorphisms[0]);
	std::cout << std::endl;
	for (int i = 0; i < 100; i++)
	{
		std::cout << std::setw(30) << std::left << copy.getbrain()->getthought(i);
		std::cout << std::setw(30) << std::left << ((cat *)Polymorphisms[0])->getbrain()->getthought(i) << std::endl;
	}
	std::cout << std::endl;
	for (int i = 0; i < 10; i++)
	{
		delete Polymorphisms[i];
	}
	//system("leaks Polymorphisms");
}