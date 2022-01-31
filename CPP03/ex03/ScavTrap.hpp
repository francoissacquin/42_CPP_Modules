#ifndef ScavTrap_HPP
# define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
{
public:
	ScavTrap( void );
	ScavTrap( std::string name );
	ScavTrap( const ScavTrap & src );
	~ScavTrap( void );

	ScavTrap&	operator=( const ScavTrap& rhs );

	void		attack( const std::string& target );
	void		guardGate( void );
};


#endif
