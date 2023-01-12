#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <list>
#include <exception>
#include <numeric>
#include <iostream>
#include <cstdlib>

class span
{
	public:
		span(unsigned int num);
		span(const span &other);
		~span();
		span &operator=(const span &rhs);

		void                addNumber( int n);
		void                addNumber( std::list<int>::const_iterator, std::list<int>::const_iterator );
		unsigned int        longestSpan( void ) const;
		unsigned int        shortestSpan( void ) const;
		std::list<int>	_list;

	private:
//		std::list<int>	_list;
		unsigned int	_n;
};

#endif