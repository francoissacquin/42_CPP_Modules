#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"
#include <iostream>

class Point
{
private:
		const Fixed		x;
		const Fixed		y;

public:
		Point( void );
		Point( const Fixed& f1, const Fixed& f2 );
		Point( const Point& src);
		~Point( void );

		Point&		operator=( const Point& rhs );
		Fixed		get_x( void ) const;
		Fixed		get_y( void ) const;

		static Fixed		slope( const Point& p1, const Point& p2 );
		static Fixed		intercept( const Fixed& slope, const Point& p1 );
};

std::ostream&		operator<<( std::ostream& o, const Point& rhs);

#endif
