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

	bool		operator>( const Fixed& rhs ) const;
	bool		operator<( const Fixed& rhs ) const;
	bool		operator>=( const Fixed& rhs ) const;
	bool		operator<=( const Fixed& rhs ) const;
	bool		operator==( const Fixed& rhs ) const;
	bool		operator!=( const Fixed& rhs ) const;

	Fixed		operator+( const Fixed& rhs ) const;
	Fixed		operator-( const Fixed& rhs ) const;
	Fixed		operator*( const Fixed& rhs ) const;
	Fixed		operator/( const Fixed& rhs ) const;

	Fixed&		operator++( void );
	Fixed		operator++( int );
	Fixed&		operator--( void );
	Fixed		operator--( int );


	int			getRawBits( void ) const;
	void		setRawBits( const int raw );

	float		toFloat( void ) const;
	int			toInt( void ) const;

	static const Fixed&		max( const Fixed& rhs1, const Fixed& rhs2 );
	static Fixed&			max( Fixed& rhs1, Fixed& rhs2 );
	static const Fixed&		min( const Fixed& rhs1, const Fixed& rhs2 );
	static Fixed&			min( Fixed& rhs1, Fixed& rhs2 );
};

std::ostream&		operator<<( std::ostream& o, const Fixed& rhs);


#endif
