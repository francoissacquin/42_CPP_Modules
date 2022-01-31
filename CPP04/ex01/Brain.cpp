#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default constructor called (Brain)" << std::endl;
	int		i;

	i = 0;
	while (i < 100)
	{
		ideas[i] = "Hi, I'm an idea! :)";
		i++;
	}
}

Brain::Brain( const Brain& src )
{
	std::cout << "Copy constructor called (Brain)" << std::endl;
	*this = src;
}

Brain::~Brain( void )
{
	std::cout << "Default destructor called (Brain)" << std::endl;
}

Brain&		Brain::operator=( const Brain& rhs )
{
	std::cout << "Assignation operator called (Brain)" << std::endl;

	if (this != &rhs)
	{
		int		i;
		i = 0;
		while (i < 100)
		{
			this->set_idea(i, rhs.get_idea(i));
			i++;
		}
	}
	return *this;
}

std::string		Brain::get_idea( int i ) const
{
	if (i >= 0 && i < 100)
		return this->ideas[i];
	return "";
}

void			Brain::set_idea( int i, std::string idea )
{
	if (i >= 0 && i < 100)
		this->ideas[i] = idea;
}
