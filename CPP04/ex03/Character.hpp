#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <string>
#include <iostream>

class Character;
class AMateria;

class Character: public ICharacter
{
private:
	std::string		_name;
	AMateria *		_inventory[4];
	int				_nb_materia;
	AMateria *		_del_materia[4];
	int				_nb_del_materia;

public:
	Character( void );
	Character( std::string name );
	Character( const Character & src );
	~Character( void );

	Character &		operator=( const Character & rhs );

	const std::string &		getName( void ) const;
	void					equip( AMateria* m );
	void					unequip( int idx );
	void					use( int idx, ICharacter & target );
};

#endif
