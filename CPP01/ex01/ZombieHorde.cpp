# include "Zombie.hpp"

Zombie*		ZombieHorde( int N, std::string name )
{
	int					i;
	std::string			index;
	std::stringstream	ss;

	Zombie*		ZombieHorde = new Zombie[N];

	i = 0;
	while (i < N)
	{
		std::stringstream	ss;
		ss << i;
		ss >> index;
		ZombieHorde[i].set_name( name + index);
		i++;
	}
	return ZombieHorde;
}