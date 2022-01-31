#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
{
	std::cout << "Default constructor called" << std::endl;
	_name = "";
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap( std::string name ): _name(name)
{
	std::cout << "ClapTrap " << name << " constructor called" << std::endl;
	_hitpoints = 10;
	_energy_points = 10;
	_attack_damage = 0;
}

ClapTrap::ClapTrap( const ClapTrap& srcs )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = srcs;
}

ClapTrap::~ClapTrap( void )
{
	std::cout << "Destructor called for ClapTrap " << this->get_name() << std::endl;
}

ClapTrap&	ClapTrap::operator=( const ClapTrap& rhs )
{
	std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
	{
		this->set_name(rhs.get_name());
		this->set_hitpoints(rhs.get_hitpoints());
		this->set_energy_points(rhs.get_energy_points());
		this->set_attack_damage(rhs.get_attack_damage());
	}
	return *this;
}

void			ClapTrap::set_name( std::string name )
{
	this->_name = name;
}

void			ClapTrap::set_hitpoints( int hitpoints )
{
	this->_hitpoints = hitpoints;
}

void			ClapTrap::set_energy_points( int energy_points )
{
	this->_energy_points = energy_points;
}

void			ClapTrap::set_attack_damage( int attack_damage )
{
	this->_attack_damage = attack_damage;
}

std::string		ClapTrap::get_name( void ) const
{
	return this->_name;
}

int				ClapTrap::get_hitpoints( void ) const
{
	return this->_hitpoints;
}

int				ClapTrap::get_energy_points( void ) const
{
	return this->_energy_points;
}

int				ClapTrap::get_attack_damage( void ) const
{
	return this->_attack_damage;
}

void			ClapTrap::attack( const std::string& target )
{
	std::cout << "ClapTrap <" << this->_name << "> attacks <" << target << "> causing ";
	std::cout << this->get_attack_damage() << " points of damage!" << std::endl;
}

void			ClapTrap::takeDamage( unsigned int amount )
{
	this->set_hitpoints(this->get_hitpoints() - amount);
	if (this->get_hitpoints() < 0)
		this->set_hitpoints(0);
	std::cout << "ClapTrap <" << this->_name << "> took " << amount << " points of damage!" << std::endl;
}

void			ClapTrap::beRepaired( unsigned int amount )
{
	this->set_hitpoints(this->get_hitpoints() + amount);
	std::cout << "ClapTrap <" << this->_name << "> is repaired and regains " << amount << " hitpoints!" << std::endl;
}
