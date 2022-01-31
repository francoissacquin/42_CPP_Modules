#ifndef SCALAR_CONVERSION_HPP
# define SCALAR_CONVERSION_HPP

#include <iostream>
#include <sstream>
#include <string>
#include <cstring>
#include <cctype>
#include <cmath>
#include <cerrno>


class Scalar_Conversion
{
private:
	char	*_line;

public:
	Scalar_Conversion( void );
	Scalar_Conversion( char *line );
	Scalar_Conversion( const Scalar_Conversion & src );
	~Scalar_Conversion( void );

	Scalar_Conversion &			operator=( const Scalar_Conversion & rhs );

	void		convert_to_char( void ) const;
	void		convert_to_int( void ) const;
	void		convert_to_float( void ) const;
	void		convert_to_double( void ) const;
	void		convert_all( void );
};


#endif