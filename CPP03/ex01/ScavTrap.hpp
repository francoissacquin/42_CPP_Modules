#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap & src );
	~ScavTrap( void );

	void		attack( const std::string& target );
	void		guardGate( void );
};


#endif
