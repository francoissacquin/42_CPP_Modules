#include "Zombie.hpp"

int		main( void )
{
	std::cout << "Strange sounds seem to come from the nearby graveyard, the earth is restless and the soil spits back the animated corpses of the damned" << std::endl;
	
	Zombie		romero( "romero" );
	romero.announce();

	Zombie*		raimi = newZombie( "raimi" );
	raimi->announce();

	randomChump( "boyle" );

	raimi->announce();
	delete raimi;
	return 0;
}
