# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap( void ) : FragTrap(), ScavTrap()
{
	std::cout << "Default constructor called (DiamondTrap)" << std::endl;
	this->_name = "";
	this->ClapTrap::set_name("_clap_name");
	this->set_attack_damage(30);
}

DiamondTrap::DiamondTrap( std::string name ) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "DiamondTrap " << name << " constructor called" << std::endl;
	this->_name = name;
	this->set_attack_damage(30);
}

DiamondTrap::DiamondTrap( const DiamondTrap & src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap( void )
{
	std::cout << "Destructor called for DiamondTrap " << this->get_name() << std::endl;
}

DiamondTrap&	DiamondTrap::operator=( const DiamondTrap& rhs )
{
	std::cout << "Assignation operator called (ScavTrap)" << std::endl;

	if (this != &rhs)
	{
		this->ClapTrap::_name = rhs.ClapTrap::_name;
		this->_name = rhs._name;
		this->set_hitpoints(rhs.get_hitpoints());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return *this;
}

std::string	DiamondTrap::get_name( void ) const
{
	return this->_name;
}

void		DiamondTrap::whoAmI( void ) const
{
	std::cout << "HI, my name is " << this->_name << std::endl;
	std::cout << "But my CL4P7R4P name is " << this->ClapTrap::get_name();
}
