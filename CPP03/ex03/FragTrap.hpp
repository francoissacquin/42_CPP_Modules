#ifndef FragTrap_HPP
# define FragTrap_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
public:
	FragTrap( void );
	FragTrap( std::string name );
	FragTrap( const FragTrap & src );
	~FragTrap( void );

	FragTrap&	operator=( const FragTrap& rhs );

	void		HighFivesGuys( void );
};


#endif
