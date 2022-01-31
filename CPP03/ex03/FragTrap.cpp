# include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap()
{
	std::cout << "Default constructor called (FragTrap)" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
	this->_hitpoints = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap& srcs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = srcs;
}

FragTrap::~FragTrap( void )
{
	std::cout << "Destructor called for FragTrap " << this->get_name() << std::endl;
}

FragTrap&	FragTrap::operator=( const FragTrap& rhs )
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

void	FragTrap::HighFivesGuys( void )
{
	std::cout << this->get_name() << ": HEEYYYY, YOU GUYYS WANT TO HIGH FIIIIIVE?" << std::endl;
}
