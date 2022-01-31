#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Default constructor called (Cat)" << std::endl;
}

Cat::Cat( const Cat& src ): Animal(src)
{
	std::cout << "Copy constructor called (Cat)" << std::endl;
}

Cat::~Cat( void )
{
	std::cout << "Destructor called (Cat)" << std::endl;
}

Cat&		Cat::operator=( const Cat& src )
{
	(void)src;
	return *this;
}

void		Cat::makeSound( void ) const
{
	std::cout << "_________|Cat sounds|________" << std::endl;
	std::cout << "|   |\\---/|                 |" << std::endl;
	std::cout << "|   | ,_, |    Meow!        |" << std::endl;
	std::cout << "|    \\_`_/-..----.          |" << std::endl;
	std::cout << "| ___/ `   ' ,""+   \\         |" << std::endl;
	std::cout << "|(__...'   __\\    |`.___.'; |" << std::endl;
	std::cout << "|  (_,...'(_,.`__)/'.....+  |" << std::endl;
	std::cout << "⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺" << std::endl << std::endl;
}
