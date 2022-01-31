#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string		_type;

public:
	WrongAnimal( void );
	WrongAnimal( std::string type );
	WrongAnimal( const WrongAnimal & src );
	~WrongAnimal( void );

	WrongAnimal&			operator=( const WrongAnimal& rhs );

	std::string		get_type( void ) const;
	void			set_type( std::string type );
	void			makeSound( void ) const;
};

std::ostream&		operator<<( std::ostream& o, const WrongAnimal& rhs );

#endif
