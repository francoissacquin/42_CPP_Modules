# include "Zombie.hpp"

Zombie::Zombie( std::string name ) : _name(name)
{
	std::cout << "<" << name << "> rises from the grave (constructor)" << std::endl;
}

Zombie::~Zombie( void )
{
	std::cout << "<" << this->get_name() << "> is put to rest (destructor)" << std::endl;
}

void			Zombie::announce( void ) const
{
	std::cout << "<" <<this->get_name() << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string		Zombie::get_name( void ) const
{
	return this->_name;
}