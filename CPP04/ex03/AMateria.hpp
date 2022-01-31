#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>

class ICharacter;

class AMateria
{
protected:
	const std::string	_type;

public:
	AMateria( void );
	AMateria( const std::string & type );
	AMateria( const AMateria & src );
	virtual ~AMateria( void );

	AMateria&		operator=( const AMateria & rhs );

	const std::string &		getType( void ) const;
	virtual AMateria*		clone( void ) const = 0;
	virtual void			use( ICharacter & target );
};

#endif
