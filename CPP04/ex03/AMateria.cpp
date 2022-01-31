#include "AMateria.hpp"

AMateria::AMateria( void )
{
	std::cout << "Default constructor called (AMateria)" << std::endl;
}

AMateria::AMateria( const std::string & type ): _type(type)
{
	std::cout << "Typed constructor called (AMateria)" << std::endl;
}

AMateria::AMateria( const AMateria & src ): _type(src._type)
{
	std::cout << "Copy constructor called (AMateria)" << std::endl;
}

AMateria::~AMateria( void )
{
	std::cout << "Default destructor called (AMateria)" << std::endl;
}

AMateria &				AMateria::operator=( const AMateria & rhs )
{
	(void)rhs;
	return *this;
}

const std::string &		AMateria::getType( void ) const
{
	return (this->_type);
}

void					AMateria::use( ICharacter & target )
{
	std::cout << "use called on " << target.getName() << std::endl;
}

