#include "HumanA.hpp"
#include "Weapon.hpp"

HumanA::HumanA( std::string name, Weapon& weapon) : _name(name), _weapon(weapon)
{
    std::cout << "HumanA constructor called" << std::endl;
}

HumanA::~HumanA( void )
{
    std::cout << "HumanA destructor called" << std::endl;
}

void    HumanA::attack( void )
{
    std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
