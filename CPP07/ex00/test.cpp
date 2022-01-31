#include "test.hpp"

Test::Test(int var): _var(var)
{
	//nothing here
}

Test::Test(const Test & src)
{
	this->_var = src._var;
}

Test::~Test( void )
{
	// nothing here
}

Test &			Test::operator=(const Test & rhs)
{
	this->_var = rhs._var;
	return *this;
}

bool			Test::operator<=(const Test & rhs) const
{
	if (this->_var <= rhs._var)
		return true;
	return false;
}

bool			Test::operator>=(const Test & rhs) const
{
	if (this->_var >= rhs._var)
		return true;
	return false;
}

int				Test::getVar(void) const
{
	return _var;
}

std::ostream &		operator<<(std::ostream & o, const Test & rhs)
{
	o << rhs.getVar();
	return o;
}
