#ifndef TEST_HPP
# define TEST_HPP

#include "whatever.hpp"

#include <iostream>

class Test
{
private:
	int		_var;

public:
	Test( int var );
	Test( const Test & src );
	~Test( void );

	Test &		operator=( const Test & rhs );
	bool		operator<=( const Test & rhs ) const;
	bool		operator>=( const Test & rhs ) const;

	int			getVar( void ) const;
};

std::ostream &		operator<<( std::ostream & o, const Test & rhs );


#endif
