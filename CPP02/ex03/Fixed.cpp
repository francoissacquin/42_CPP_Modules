#include "Fixed.hpp"

Fixed::Fixed( void )
{
	//std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed( const int i )
{
	//std::cout << "Int constructor called" << std::endl;
	this->_value = i << this->_binary_pos;
}

Fixed::Fixed( const float f )
{
	//std::cout << "Float constructor called" << std::endl;
	this->_value = roundf(f * (1 << _binary_pos));
}

Fixed::Fixed( Fixed const & src )
{
	//std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed( void )
{
	//std::cout << "Destructor called" << std::endl;
}

int			Fixed::getRawBits( void ) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void		Fixed::setRawBits( const int raw )
{
	//std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}

float		Fixed::toFloat( void ) const
{
	float		res;

	res = (float)this->_value / (1 << _binary_pos);
	return res;
}

int			Fixed::toInt( void ) const
{
	return this->_value >> this->_binary_pos;
}

Fixed&		Fixed::operator=( Fixed const & rhs )
{
	//std::cout << "Assignation operator called" << std::endl;

	if (this != &rhs)
		this->_value = rhs._value;
	return *this;
}

bool	Fixed::operator>( const Fixed& rhs ) const
{
	return (this->getRawBits() > rhs.getRawBits());
}

bool	Fixed::operator<( const Fixed& rhs ) const
{
	return (this->getRawBits() < rhs.getRawBits());
}

bool	Fixed::operator>=( const Fixed& rhs ) const
{
	return (this->getRawBits() >= rhs.getRawBits());
}

bool	Fixed::operator<=( const Fixed& rhs ) const
{
	return (this->getRawBits() <= rhs.getRawBits());
}

bool	Fixed::operator==( const Fixed& rhs ) const
{
	return (this->getRawBits() == rhs.getRawBits());
}

bool	Fixed::operator!=( const Fixed& rhs ) const
{
	return (this->getRawBits() != rhs.getRawBits());
}

Fixed	Fixed::operator+( const Fixed& rhs ) const
{
	Fixed		res;

	res.setRawBits(this->getRawBits() + rhs.getRawBits());
	return res;
}

Fixed	Fixed::operator-( const Fixed& rhs ) const
{
	Fixed res;

	res.setRawBits(this->getRawBits() - rhs.getRawBits());
	return res;
}

Fixed	Fixed::operator*( const Fixed& rhs ) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed	Fixed::operator/( const Fixed& rhs ) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed&	Fixed::operator++( void )
{
	 this->_value++;
	 return (*this);
}

Fixed	Fixed::operator++( int )
{
	Fixed	copy(*this);

	this->_value++;
	return copy;
}

Fixed&	Fixed::operator--( void )
{
	 this->_value--;
	 return (*this);
}

Fixed	Fixed::operator--( int )
{
	Fixed	copy(*this);

	this->_value--;
	return copy;
}

const Fixed&		Fixed::max( const Fixed& rhs1, const Fixed& rhs2 )
{
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;
}

Fixed&				Fixed::max( Fixed& rhs1, Fixed& rhs2 )
{
	if (rhs1 > rhs2)
		return rhs1;
	else
		return rhs2;
}

const Fixed&		Fixed::min( const Fixed& rhs1, const Fixed& rhs2 )
{
	if (rhs1 < rhs2)
		return rhs1;
	else
		return rhs2;
}

Fixed&				Fixed::min( Fixed& rhs1, Fixed& rhs2 )
{
	if (rhs1 < rhs2)
		return rhs1;
	else
		return rhs2;
}

std::ostream&	operator<<( std::ostream & o, Fixed const & rhs )
{
	o << rhs.toFloat();
	return o;
}