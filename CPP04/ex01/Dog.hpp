#ifndef DOG_HPP
# define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
private:
		Brain	*_dog_brain;

public:
		Dog( void );
		Dog( const Dog & src );
		~Dog( void );

		Dog&	operator=( const Dog& src );

		void		makeSound( void ) const;
		Brain*		get_brain_access( void ) const;
};

#endif
