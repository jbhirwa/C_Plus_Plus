#include "fixed.hpp"
#include <iostream>

Fixed::Fixed(): _fixedPoint(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &copyFixed): _fixedPoint(copyFixed._fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &AssignFixed)
{
	std::cout << "Assignment operator called" << std::endl;
	this->_fixedPoint = AssignFixed._fixedPoint; 
	return *this;
}

int Fixed::getRawBits()
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->_fixedPoint;
}

void Fixed::setRawBits(int const fixedPoint)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_fixedPoint = fixedPoint;
}
