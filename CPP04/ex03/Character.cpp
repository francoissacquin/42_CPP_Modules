# include "Character.hpp"

Character::Character( void )
{
	this->_name = "";
	this->_nb_materia = 0;
	this->_nb_del_materia = 0;
	std::cout << "Default constructor called (Character)" << std::endl;
}

Character::Character( std::string name)
{
	this->_name = name;
	this->_nb_materia = 0;
	this->_nb_del_materia = 0;
	std::cout << "Named constructor called (Character)" << std::endl;
}

Character::Character(const Character & src )
{
	if (this != &src)
	{
		this->_name = src._name;
		this->_nb_materia = src._nb_materia;
		this->_nb_del_materia = src._nb_del_materia;
		for (int i = 0; i < this->_nb_materia; i++)
		{
			this->_inventory[i] = src._inventory[i]->clone();
		}
		for (int i = 0; i < this->_nb_del_materia; i++)
		{
			this->_del_materia[i] = src._del_materia[i]->clone();
		}
	}
	std::cout << "Copy constructor called (Character)" << std::endl;
}

Character::~Character( void )
{
	while (this->_nb_materia > 0)
	{
		delete this->_inventory[this->_nb_materia - 1];
		this->_nb_materia--;
	}
	for (int i = 0; i < _nb_del_materia; i++)
	{
		delete this->_del_materia[i];
		this->_del_materia[i] = NULL;
	}
	std::cout << "Default destructor called (Character)" << std::endl;
}

Character &				Character::operator=( const Character & rhs )
{
	if (this != &rhs)
	{
		int		i;
		i = 0;
		while (i < this->_nb_materia)
		{
			delete this->_inventory[i];
			i++;
		}
		this->_name = rhs._name;
		this->_nb_materia = rhs._nb_materia;
		this->_nb_del_materia = rhs._nb_del_materia;
		i = 0;
		while (i < this->_nb_materia)
		{
			this->_inventory[i] = rhs._inventory[i]->clone();
			i++;
		}
		i = 0;
		while (i < this->_nb_del_materia)
		{
			this->_del_materia[i] = rhs._del_materia[i]->clone();
			i++;
		}
	}
	return *this;
}

const std::string &		Character::getName( void ) const
{
	return this->_name;
}

void					Character::equip( AMateria * m )
{
	if (this->_nb_materia < 4 && m != NULL)
	{
		this->_inventory[this->_nb_materia] = m->clone();
		this->_nb_materia++;
		if (this->_nb_del_materia == 4)
		{
			for (int i = 0; i < _nb_del_materia; i++)
			{
				delete this->_del_materia[i];
				this->_del_materia[i] = NULL;
			}
			this->_nb_del_materia = 0;
		}
	}
	else
		std::cout << "Inventory is full, cannot equip a new Materia" << std::endl;
}

void					Character::unequip( int idx )
{
	if (idx >= 0 && idx < this->_nb_materia)
	{
		int		i;
		i = idx;
		this->_del_materia[this->_nb_del_materia] = this->_inventory[idx];
		this->_nb_del_materia++;
		while (i < this->_nb_materia - 1)
		{
			this->_inventory[i] = this->_inventory[i + 1];
			i++;
		}
		this->_inventory[i] = NULL;
		this->_nb_materia--;
	}
	else
		std::cout << "Invalid index given for unequip() function" << std::endl;
}

void					Character::use( int idx, ICharacter & target )
{
	if (idx >= 0 && idx < _nb_materia)
	{
		this->_inventory[idx]->use(target);
	}
	else
		std::cout << "Invalid index given for use() function on target: " << target.getName() << std::endl;
}
