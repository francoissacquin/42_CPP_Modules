#include "WrongCat.hpp"

WrongCat::WrongCat( void ): WrongAnimal("WrongCat")
{
	std::cout << "Default constructor called (WrongCat)" << std::endl;
}

WrongCat::WrongCat( const WrongCat& src ): WrongAnimal(src)
{
	std::cout << "Copy constructor called (WrongCat)" << std::endl;
}

WrongCat::~WrongCat( void )
{
	std::cout << "Destructor called (WrongCat)" << std::endl;
}

WrongCat&		WrongCat::operator=( const WrongCat& src )
{
	(void)src;
	return *this;
}

void		WrongCat::makeSound( void ) const
{
	std::cout << "_________|Cat sounds|________" << std::endl;
	std::cout << "|   |\\---/|                |" << std::endl;
	std::cout << "|   | ,_, |    Meow!        |" << std::endl;
	std::cout << "|    \\_`_/-..----.         |" << std::endl;
	std::cout << "| ___/ `   ' ,""+ \\        |" << std::endl;
	std::cout << "|(__...'   __\\    |`.___.';|" << std::endl;
	std::cout << "|  (_,...'(_,.`__)/'.....+  |" << std::endl;
	std::cout << "⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺" << std::endl << std::endl;
}
