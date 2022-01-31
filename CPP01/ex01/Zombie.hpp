#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <sstream>

class Zombie
{
private:
		std::string		_name;

public:
		Zombie( std::string name );
		Zombie( void );
		~Zombie( void );
		
		void			announce( void ) const;
		std::string		get_name( void ) const;
		void			set_name( std::string name );

};

Zombie*		ZombieHorde( int N, std::string name );

#endif
