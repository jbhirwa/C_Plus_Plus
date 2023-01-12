#include "BaseTypes.hpp"
#include <iostream>

based * generate(void)
{

	std::cout << "generated: ";
	switch (rand() % 3)
	{
	case 0:
		std::cout << "A";
		return new A();
	case 1:
		std::cout << "B";
		return new B();
	case 2:
		std::cout << "C";
		return new C();
	default:
		return NULL;
	}
}

void identify(based *p)
{
    std::cout << "Identify by pointer: ";
    if(dynamic_cast<A*>(p))
    	std::cout << "A" << std::endl;
    else if(dynamic_cast<B*>(p))
    	std::cout << "B" << std::endl;
    else if(dynamic_cast<C*>(p))
   		std::cout << "A" << std::endl;
    else
        std::cout << "Bad Cast" << std::endl;
}

void identify(based &p)
{
    std::cout << "Identify by reference: ";
    try
    {
        if(dynamic_cast<A*>(&p))
            std::cout << "A" << std::endl;
        else if(dynamic_cast<B*>(&p))
            std::cout << "B" << std::endl;
        else if(dynamic_cast<C*>(&p))
            std::cout << "A" << std::endl;
    }
    catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}

int main()
{
    srand(time(NULL));
	based* ptr = generate();
	std::cout << " (pointer)" << std::endl;
	based* tmp = generate();
	based& ref = *tmp;
	std::cout << " (reference)" << std::endl;

	identify(ptr);
	identify(ref);

	delete ptr;
	delete tmp;
}