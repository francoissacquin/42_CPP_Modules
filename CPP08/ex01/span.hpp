#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <vector>
#include <cstdlib>
#include <time.h>

class	Span
{
private:
	unsigned int		_N;
	std::vector<int>	_array;

public:

	class ArrayIsFullException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Array cannot add the given element or it will surpass maximum capacity";
			}
	};

	class SpanInvalidException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Array contains 1 or less values and cannot run span() function";
			}
	};

	Span( unsigned int N );
	Span( const Span & src );
	~Span( void );

	Span &		operator=( const Span & rhs );

	void			addNumber( int num );
	void			addNumber( std::vector<int>::iterator start, std::vector<int>::iterator end );
	unsigned int	shortestSpan( void );
	unsigned int	longestSpan( void );
	void			print_array(void);
};

#endif
