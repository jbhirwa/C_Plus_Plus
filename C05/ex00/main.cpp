#include "Bureaucrat.hpp"

int main()
{
	bureaucrat john("John", 2);
	bureaucrat jim("Jim", 149);

	try
	{
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.incrementGrade();
		jim.decrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
		john.incrementGrade();
		jim.decrementGrade();
		std::cout << john << std::endl;
		std::cout << jim << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}