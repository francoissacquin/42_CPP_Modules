# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap("", 100, 50, 20)
{
	std::cout << "Default constructor called (ScavTrap)" << std::endl;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap( const ScavTrap& srcs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = srcs;
}

ScavTrap::~ScavTrap( void )
{
	std::cout << "Destructor called for ScavTrap " << this->get_name() << std::endl;
}

void		ScavTrap::attack( const std::string& target )
{
	std::cout << "ScavTrap <" << this->get_name() << "> attacks <" << target << "> causing ";
	std::cout << this->get_attack_damage() << " points of damage!" << std::endl;
}

void		ScavTrap::guardGate( void )
{
	std::cout << "ScavTrap " << this->get_name() << " has entered gate keeper mode" << std::endl;
}
