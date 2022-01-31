#ifndef ClapTrap_HPP
# define ClapTrap_HPP

# include <iostream>
# include <string>

class ClapTrap
{
protected:
	std::string		_name;
	int				_hitpoints;
	int				_energy_points;
	int				_attack_damage;

public:
	ClapTrap( void );
	ClapTrap( std::string name );
	ClapTrap( std::string name, int health, int energy, int attack );
	ClapTrap( const ClapTrap& src );
	~ClapTrap( void );

	ClapTrap&	operator=( const ClapTrap& rhs );

	void		set_name( std::string name );
	std::string	get_name( void ) const;
	void		set_hitpoints( int hitpoints );
	int			get_hitpoints( void ) const;
	void		set_energy_points( int energy_points );
	int			get_energy_points( void ) const;
	void		set_attack_damage( int attack_damage );
	int			get_attack_damage( void ) const;

	void	attack( const std::string& target );
	void	takeDamage( unsigned int amount );
	void	beRepaired( unsigned int amount );
};


#endif
