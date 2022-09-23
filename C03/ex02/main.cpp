#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	// ClapTrap john("John");
	// ClapTrap jim("Jim");
	// ClapTrap joe("Joe");

	// ScavTrap john("John");
	// ScavTrap jim("Jim");
	// ScavTrap joe("Joe");

	FragTrap john("John");
	FragTrap jim("Jim");
	FragTrap joe("Joe");

	john.attack("Marge");
	john.attack("Bart");
	john.attack("Homer");
	john.takeDamage(5);
	jim.takeDamage(9);
	jim.takeDamage(10);
	joe.beRepaired(10);
	joe.takeDamage(19);
	joe.highFivesGuys();
}