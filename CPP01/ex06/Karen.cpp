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
}

Karen::~Karen( void )
{
	std::cout << "Karen destructor called" << std::endl;
}

void	Karen::complain( std::string level)
{
	Karen::_level_switch	c_level;

	c_level = return_enum_lvl( level );
	switch (c_level)
	{
		case (Karen::DEBUG):
			(this->*ft_array[0])();
		case (Karen::INFO):
			(this->*ft_array[1])();
		case (Karen::WARNING):
			(this->*ft_array[2])();
		case (Karen::ERROR):
			(this->*ft_array[3])();
			break;
		case (Karen::NOT_FOUND):
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
			break;
	}
	return ;
}

Karen::_level_switch	Karen::return_enum_lvl( std::string level )
{
	std::string		level_array[] = { "DEBUG", "INFO", "WARNING", "ERROR"};
	int				i;

	i = 0;
	while (i < 4)
	{
		if (level == level_array[i])
			return ((_level_switch)i);
		i++;
	}
	return ((_level_switch)i);
}

void	Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-";
	std::cout << "pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t";
	std::cout << " put enough! If you did I would not have to ask for it" << std::endl;
}

void	Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming";
	std::cout << " here for years and you just started working here last month." << std::endl;
}

void	Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}
