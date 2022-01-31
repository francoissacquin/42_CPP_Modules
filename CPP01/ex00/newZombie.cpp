# include "Zombie.hpp"

Zombie*	newZombie( std::string name )
{
	Zombie*		freshZombie = new Zombie( name );

	return freshZombie;
}
