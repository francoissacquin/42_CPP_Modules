#include "Karen.hpp"

Karen::Karen( void )
{
	std::cout << "Karen constructor called" << std::endl;
	ft_array[0] = &Karen::debug;
	ft_array[1] = &Karen::info;
	ft_array[2] = &Karen::warning;
	ft_array[3] = &Karen::error;
	_levels[0] = "DEBUG";
	_levels[1] = "INFO";
	_levels[2] = "WARNING";
	_levels[3] = "ERROR";
	_level_reached = 0;
}

Karen::~Karen( void )
{
	std::cout << "Karen destructor called" << std::endl;
}

void	Karen::complain( std::string level)
{
	int		i;

	i = 0;
	while (i < 4)
	{
		if (level == this->_levels[i] && this->_level_reached == 0)
		{
			(this->*ft_array[i])();
			this->_level_reached = 1;
		}
		i++;
	}
	if (this->_level_reached == 0)
		std::cout << "Error: level given is not recognized" << std::endl;
	this->_level_reached = 0;
}

void	Karen::debug( void )
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t";
	std::cout << " put enough! If you did I would not have to ask for it" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << " here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
