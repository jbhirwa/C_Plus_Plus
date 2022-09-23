#ifndef FIXED_HPP
# define FIXED_HPP
class Fixed
{
	public:
		Fixed();
		Fixed(const Fixed &copyFixed);
		Fixed& operator=(const Fixed &AssignFixed);
		~Fixed();
		int 	getRawBits();
		void	setRawBits(int const fixedPoint);
	
	private:
		int					_fixedPoint;
		static const int	fraction;

};
#endif

/*
	The idea of const functions is not to allow them to modify the object
	on which they are called. It is recommended the practice to make as many
	functions const as possible so that accidental changes to objects are avoided.
*/