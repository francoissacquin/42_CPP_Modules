# include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap()
{
	std::cout << "Default constructor called (ScavTrap)" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
}

ScavTrap::ScavTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "ScavTrap " << name << " constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
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

ScavTrap&	ScavTrap::operator=( const ScavTrap& rhs )
{
	std::cout << "Assignation operator called (ScavTrap)" << std::endl;

	if (this != &rhs)
	{
		this->set_name(rhs.get_name());
		this->set_hitpoints(rhs.get_hitpoints());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return *this;
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
