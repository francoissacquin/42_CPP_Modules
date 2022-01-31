#include "test.hpp"

Test::Test( void ): _var(1)
{
	//nothing here
}

Test::Test( const Test & src )
{
	_var = src._var;
}

Test::~Test( void )
{
	//nothing here
}

int			Test::getVar( void ) const
{
	return this->_var;
}

std::ostream &		operator<<( std::ostream & o, const Test & rhs )
{
	o << rhs.getVar();
	return o;
}
