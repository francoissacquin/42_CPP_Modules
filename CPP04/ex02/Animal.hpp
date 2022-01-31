#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
	std::string		_type;

public:
	Animal( void );
	Animal( std::string type );
	Animal( const Animal & src );
	virtual ~Animal( void );

	Animal&			operator=( const Animal& rhs );

	std::string		get_type( void ) const;
	void			set_type( std::string type );
	virtual void	makeSound( void ) const = 0;
};

std::ostream&		operator<<( std::ostream& o, const Animal& rhs );

#endif
