#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	bureaucrat john("John", 5);

	std::cout << john << std::endl;

	try
	{
		john.incrementGrade();
		john.incrementGrade();
		std::cout << john << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	try
	{
		form test("test", 151, 42);
	}
	catch(const std::exception& e)
	{
		std::cerr << "Cannot initialize test because " << e.what() << std::endl;
	}

	form a("a");
	form b("b", 3, 3);
	form c("c", 9, 20);
	std::cout << john << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	john.signForm(a);
	john.signForm(b);
	john.signForm(c);
	
	try
	{
		john.decrementGrade();
		std::cout << john << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	john.signForm(c);
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << c << std::endl;
}