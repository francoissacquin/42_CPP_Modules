#include "Zombie.hpp"

int		main( void )
{
	int		i;
	std::cout << "The horde approaches, distant groans and screetches of the half-living feel the damp and cold night air" << std::endl;
	
	Zombie		romero( "romero" );
	romero.announce();

	Zombie*		Horde = ZombieHorde( 10, "Wright");

	i = 0;
	while (i < 10)
	{
		Horde[i].announce();
		i++;
	}
	delete [] Horde;

	return 0;
}
