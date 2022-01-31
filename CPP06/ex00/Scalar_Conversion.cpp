#include  "Scalar_Conversion.hpp"

Scalar_Conversion::Scalar_Conversion( void )
{
	//std::cout << "Default constructor called (Scalar_Conversion)" << std::endl;
	_line = NULL;
}

Scalar_Conversion::Scalar_Conversion( char *line ): _line(line)
{
	//std::cout << "Typed constructor called (Scalar_Conversion)" << std::endl;
}

Scalar_Conversion::Scalar_Conversion( const Scalar_Conversion & src )
{
	//std::cout << "Copy constructor called (Scalar_Conversion)" << std::endl;
	*this = src;
}

Scalar_Conversion::~Scalar_Conversion( void )
{
	//std::cout << "Default destructor called (Scalar_Conversion)" << std::endl;
}

Scalar_Conversion &			Scalar_Conversion::operator=( const Scalar_Conversion & rhs )
{
	if (this != &rhs)
	{
		this->_line = rhs._line;
	}
	return *this;
}

void						Scalar_Conversion::convert_to_char( void ) const
{
	float		intermediary;

	intermediary = strtof(this->_line, NULL);
	if (isprint(static_cast<char>(intermediary)))
	{
		std::cout << "char: '" << static_cast<char>(intermediary) << "'" << std::endl;
	}
	else if (!isprint(static_cast<char>(intermediary)) && errno != ERANGE && std::isfinite(intermediary))
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
	}
	return ;
}

void						Scalar_Conversion::convert_to_int( void ) const
{
	double		intermediary;

	intermediary = strtod(this->_line, NULL);
	if (errno != ERANGE && intermediary <= 2147483647 && intermediary >= -2147483648)
	{
		std::cout << "int: " << static_cast<int>(intermediary) << std::endl;
	}
	else
	{
		std::cout << "int: impossible"<< std::endl;
	}
	return ;
}

void						Scalar_Conversion::convert_to_float( void ) const
{
	float		intermediary;

	intermediary = strtof(this->_line, NULL);
	if (errno != ERANGE) // && intermediary != HUGE_VALF && intermediary != -HUGE_VALF
	{
		std::cout << "float: " << intermediary;
		if (std::isfinite(intermediary) && intermediary == floor(intermediary))
			std::cout << ".0";
		std::cout << "f" << std::endl;

	}
	else
	{
		std::cout << "float: impossible" << std::endl;
	}
	return ;
}

void						Scalar_Conversion::convert_to_double( void ) const
{
	double		intermediary;

	intermediary = strtod(this->_line, NULL);
	if (errno != ERANGE)//&& std::isfinite(intermediary)
	{
		std::cout << "double: " << intermediary;
		if (std::isfinite(intermediary) && intermediary == floor(intermediary))
			std::cout << ".0";
		std::cout << std::endl;
	}
	else
	{
		std::cout << "double: impossible" << std::endl;
	}
	return ;
}

void						Scalar_Conversion::convert_all( void )
{
	if (strlen(this->_line) == 1 && !isdigit(this->_line[0]))
	{
		std::stringstream		temp;
		temp << (int)this->_line[0];
		this->_line = (char *)temp.str().c_str();
	}
	convert_to_char();
	convert_to_int();
	convert_to_float();
	convert_to_double();
}
