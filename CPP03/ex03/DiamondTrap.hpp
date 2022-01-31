#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
private:
		std::string		_name;

public:
		DiamondTrap( void );
		DiamondTrap( std::string name );
		DiamondTrap( const DiamondTrap & src );
		~DiamondTrap( void );

		DiamondTrap&	operator=( const DiamondTrap& rhs );

		std::string	get_name( void ) const;
		using		ScavTrap::attack;
		void		whoAmI( void ) const;
};

#endif
