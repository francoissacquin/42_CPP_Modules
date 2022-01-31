#include "Animal.hpp"

Animal::Animal( void )
{
	std::cout << "Default constructor called (Animal)" << std::endl;
	this->_type = "no type";
}

Animal::Animal( std::string type ) : _type(type)
{
	std::cout << "Typed constructor called (Animal)" << std::endl;
}

Animal::Animal( const Animal & src)
{
	std::cout << "Copy constructor called (Animal)" << std::endl;
	*this = src;
}

Animal::~Animal( void )
{
	std::cout << "Destructor called (Animal)" << std::endl;
}

Animal&			Animal::operator=( const Animal& rhs )
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &rhs)
		this->set_type(rhs.get_type());
	return *this;
}

std::string		Animal::get_type( void ) const
{
	return this->_type;
}

void			Animal::set_type( std::string type )
{
	this->_type = type;
}

void			Animal::makeSound( void ) const
{
	std::cout << "[" << this->get_type() << "] (weird animal noises)" << std::endl;
}

std::ostream&	operator<<( std::ostream & o, const Animal & rhs )
{
	o << rhs.get_type();
	return o;
}
