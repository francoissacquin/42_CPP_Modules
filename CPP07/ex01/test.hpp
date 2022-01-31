#ifndef TEST_HPP
# define TEST_HPP

#include <iostream>

class Test
{
private:
	int		_var;

public:
	Test( void );
	Test( const Test & src );
	~Test( void );

	int		getVar( void ) const;
};
std::ostream &		operator<<( std::ostream & o, const Test & rhs );

#endif
