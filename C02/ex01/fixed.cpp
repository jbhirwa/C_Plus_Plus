#include "fixed.hpp"

//Constructors
Fixed::Fixed(): _fixedPoint(0)
	{
		std::cout << "Default constructor called" << std::endl;
	}
Fixed::Fixed(const int num)
	{
		std::cout << "Int constructor called" << std::endl;
		this->_fixedPoint = (num << fraction);
	}
Fixed::Fixed(const float num)
	{
		std::cout << "Float constructor called" << std::endl;
		this->_fixedPoint = (num * (1 << fraction));
	}
Fixed::Fixed(const Fixed &copyFixed): _fixedPoint(copyFixed._fixedPoint)
	{
		std::cout << "Copy constructor called" << std::endl;
	}
Fixed::~Fixed()
	{
		std::cout << "Destructor called" << std::endl;
	}

//Operator Override
Fixed &Fixed::operator=(const Fixed &AssignFixed)
	{
		std::cout << "Assignment operator called" << std::endl;
		this->_fixedPoint = AssignFixed._fixedPoint; 
		return *this;
	}
std::ostream& operator<<(std::ostream& os, const Fixed &InsertFixed)
	{
		std::cout << "Insertation operator called" << std::endl;
		os << InsertFixed.toFloat();
		return os;
	}

//Member functions
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
int		Fixed::toInt(void) const
	{
		std::cout << "toInt member function called" << std::endl;
		return this->_fixedPoint >> fraction;
	}
float	Fixed::toFloat(void) const
	{
		std::cout << "toFloat member function called" << std::endl;
		return (this->_fixedPoint / (1 << fraction));
	}