#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
#include <string>

class Weapon
{
private:
            std::string     _type;

public:
            Weapon( std::string initial_type );
            ~Weapon( void );

            std::string     getType( void ) const;
            void            setType( std::string new_type );
};


#endif
