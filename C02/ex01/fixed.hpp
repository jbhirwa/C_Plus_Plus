#ifndef FIXED_HPP
# define FIXED_HPP
#include <iostream>
#include <cmath>
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copyFixed);
		Fixed& operator=(const Fixed &AssignFixed);
		Fixed(const int num);
		Fixed(const float num);
		~Fixed();
		int 	getRawBits();
		void	setRawBits(int const fixedPoint);
		int		toInt(void) const;
		float	toFloat(void) const;
	
	private:
		int					_fixedPoint;
		static const int	fraction = 8;

};
std::ostream& operator<<(std::ostream& os, const Fixed& InsertFixed);

#endif

/*
	The idea of const functions is not to allow them to modify the object
	on which they are called. It is recommended the practice to make as many
	functions const as possible so that accidental changes to objects are avoided.
*/