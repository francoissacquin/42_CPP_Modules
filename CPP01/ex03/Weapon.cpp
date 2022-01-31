# include "Weapon.hpp"

Weapon::Weapon( std::string initial_type ) : _type(initial_type)
{
    std::cout << "Weapon contructor called" << std::endl;
}

Weapon::~Weapon( void )
{
    std::cout << "Weapon destructor called" << std::endl;
}

std::string     Weapon::getType( void ) const
{
    return this->_type;
}

void            Weapon::setType( std::string new_type )
{
    this->_type = new_type;
}
