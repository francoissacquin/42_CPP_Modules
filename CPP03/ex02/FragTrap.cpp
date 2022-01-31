# include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap("", 100, 100, 30)
{
	std::cout << "Default constructor called (FragTrap)" << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap " << name << " constructor called" << std::endl;
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

void	FragTrap::HighFivesGuys( void )
{
	std::cout << "(FragTrap) <" << this->get_name() << "> HEEYYYY, YOU GUYYS WANT TO HIGH FIIIIIVE?" << std::endl;
}
