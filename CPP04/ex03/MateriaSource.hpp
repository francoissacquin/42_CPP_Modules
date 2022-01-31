#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"
#include <iostream>

class MateriaSource: public IMateriaSource
{
private:
	AMateria	*_materia_array[4];
	int			_nb_materia;

public:
	MateriaSource( void );
	MateriaSource( const MateriaSource & src );
	~MateriaSource( void );

	MateriaSource &		operator=(const MateriaSource & rhs );

	void				learnMateria( AMateria * src );
	AMateria *			createMateria( const std::string & type );
};

#endif