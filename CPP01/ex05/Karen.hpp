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
	int			_level_reached;

public:
	Karen( void );
	~Karen( void );

	void	complain( std::string level );

};

#endif
