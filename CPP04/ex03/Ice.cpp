# include "Ice.hpp"

Ice::Ice( void ): AMateria("ice")
{
	std::cout << "Default constructor called (Ice)" << std::endl;
}

Ice::Ice( const Ice & src ): AMateria(src)
{
	std::cout << "Copy constructor called (Ice)" << std::endl;
}

Ice::~Ice( void )
{
	std::cout << "Default destructor called (Ice)" << std::endl;
}

Ice &			Ice::operator=( const Ice & rhs )
{
	(void)rhs;
	return *this;
}

Ice *			Ice::clone( void ) const
{
	Ice *	clone = new Ice();
	return clone;
}

void			Ice::use( ICharacter & target )
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
