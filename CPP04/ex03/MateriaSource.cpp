#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void )
{
	std::cout << "Default constrcutor called (MateriaSource)" << std::endl;
	this->_nb_materia = 0;
}

MateriaSource::MateriaSource( const MateriaSource & src )
{
	if (this != &src)
	{
		int		i;
		i = 0;
		this->_nb_materia = src._nb_materia;
		while (i < this->_nb_materia)
		{
			this->_materia_array[i] = src._materia_array[i]->clone();
			i++;
		}
	}
}

MateriaSource::~MateriaSource( void )
{
	while (this->_nb_materia > 0)
	{
		delete this->_materia_array[this->_nb_materia - 1];
		this->_nb_materia--;
	}
}

MateriaSource &		MateriaSource::operator=( const MateriaSource & rhs )
{
	if (this != &rhs)
	{
		int		i;
		i = 0;
		while (i < this->_nb_materia)
		{
			delete _materia_array[i];
			i++;
		}
		i = 0;
		while (i < rhs._nb_materia)
		{
			_materia_array[i] = rhs._materia_array[i]->clone();
			i++;
		}
	}
	return *this;
}

void				MateriaSource::learnMateria( AMateria * src )
{
	if (this->_nb_materia < 4)
	{
		this->_materia_array[this->_nb_materia] = src;
		this->_nb_materia++;
	}
}

AMateria *			MateriaSource::createMateria( const std::string & type )
{
	int		i;

	i = 0;
	while (i < this->_nb_materia)
	{
		if (_materia_array[i]->getType() == type)
			return this->_materia_array[i];
		i++;
	}
	return 0;
}
