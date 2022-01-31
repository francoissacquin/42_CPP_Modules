#include "Point.hpp"

Point::Point( void ): x(Fixed(0)), y(Fixed(0))
{
	//std::cout << "Default constructor called" << std::endl;
}

Point::Point( const Fixed& f1, const Fixed& f2 ) : x(f1), y(f2)
{
	//std::cout << "Double Fixed constrcutor called" << std::endl;
}

Point::Point( const Point& src)
{
	*this = src;
}

Point::~Point( void )
{
	//std::cout << "Destructor called" << std::endl;
}

Fixed		Point::get_x( void ) const
{
	return this->x.toFloat();
}

Fixed		Point::get_y( void ) const
{
	return this->y.toFloat();
}

Point&		Point::operator=( const Point& rhs )
{
	(void)rhs;
	return *this;
}

Fixed	Point::slope( const Point& p1, const Point& p2 )
{
	Fixed	denominator(p1.get_x() - p2.get_x());
	Fixed	numerator(p1.get_y() - p2.get_y());
	Fixed	result(numerator / denominator);

	return result;
}

Fixed	Point::intercept( const Fixed& slope, const Point& p1 )
{
	Fixed	interceptor(p1.y - (slope * p1.x));

	return interceptor;
}

std::ostream&	operator<<( std::ostream & o, Point const & rhs )
{
	o << "point( " << rhs.get_x() << " , " << rhs.get_y() << " )";
	return o;
}