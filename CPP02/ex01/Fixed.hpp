#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					_value;
	static const int	_binary_pos = 8;

public:

	Fixed( void );
	Fixed( const int i );
	Fixed( const float f);
	Fixed( const Fixed& src );
	~Fixed( void );

	Fixed&		operator=( const Fixed& rhs );

	int			getRawBits( void ) const;
	void		setRawBits( const int raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;
};

std::ostream&		operator<<( std::ostream& o, const Fixed& rhs);


#endif
