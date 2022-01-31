#ifndef KAREN_HPP
# define KAREN_HPP

#include <string>
#include <iostream>

class Karen
{
typedef	void	(Karen::*ft_ptr)();

private:
	void	debug( void );
	void	info( void );
	void	warning( void );
	void	error( void );

	ft_ptr			ft_array[4];
	std::string		_levels[4];
	enum		_level_switch { DEBUG, INFO, WARNING, ERROR, NOT_FOUND};


public:
	Karen( void );
	~Karen( void );

	void	complain( std::string level );
	Karen::_level_switch	return_enum_lvl(std::string level);

};

#endif
