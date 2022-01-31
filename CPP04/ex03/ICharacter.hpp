#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

class AMateria;
class ICharacter;

class ICharacter
{
public:
	virtual							~ICharacter( void ) {}
	virtual const std::string &		getName() const = 0;
	virtual void					equip( AMateria* m ) = 0;
	virtual void					unequip( int idx ) = 0;
	virtual void					use( int idx, ICharacter & target ) = 0;
};

#endif
