# include "Cure.hpp"

Cure::Cure( void ): AMateria("cure")
{
	std::cout << "Default constructor called (Cure)" << std::endl;
}

Cure::Cure( const Cure & src ): AMateria(src)
{
	std::cout << "Copy constructor called (Cure)" << std::endl;
}

Cure::~Cure( void )
{
	std::cout << "Default destructor called (Cure)" << std::endl;
}

Cure &			Cure::operator=( const Cure & rhs )
{
	(void)rhs;
	return *this;
}

Cure *			Cure::clone( void ) const
{
	Cure *	clone = new Cure();
	return clone;
}

void			Cure::use( ICharacter & target )
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
