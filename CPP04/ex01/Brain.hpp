#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <string>
#include <iostream>

class Brain
{
private:
	std::string		ideas[100];

public:
	Brain( void );
	Brain( const Brain & src );
	~Brain( void );

	Brain&			operator=( const Brain& rhs );

	std::string		get_idea( int i ) const;
	void			set_idea( int i, std::string idea );
};

#endif
