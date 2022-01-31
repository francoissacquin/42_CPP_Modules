#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void )
{
	std::cout << "Default constructor called (WrongAnimal)" << std::endl;
	this->_type = "no type";
}

WrongAnimal::WrongAnimal( std::string type ) : _type(type)
{
	std::cout << "Typed constructor called (WrongAnimal)" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src)
{
	std::cout << "Copy constructor called (WrongAnimal)" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal( void )
{
	std::cout << "Destructor called (WrongAnimal)" << std::endl;
}

WrongAnimal&			WrongAnimal::operator=( const WrongAnimal& rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->set_type(rhs.get_type());
	return *this;
}

std::string		WrongAnimal::get_type( void ) const
{
	return this->_type;
}

void			WrongAnimal::set_type( std::string type )
{
	this->_type = type;
}

void			WrongAnimal::makeSound( void ) const
{
	std::cout << "[" << this->get_type() << "] (weird WrongAnimal noises)" << std::endl;
}

std::ostream&	operator<<( std::ostream & o, const WrongAnimal & rhs )
{
	o << rhs.get_type();
	return o;
}
