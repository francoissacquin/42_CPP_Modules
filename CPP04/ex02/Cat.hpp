#ifndef CAT_HPP
# define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
private:
		Brain	*_cat_brain;

public:
		Cat( void );
		Cat( const Cat & src );
		~Cat( void );

		Cat&	operator=( const Cat& src );

		void		makeSound( void ) const;
		Brain*		get_brain_access( void ) const;
};

#endif
