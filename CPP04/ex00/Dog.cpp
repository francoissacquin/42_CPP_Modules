#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << "Default constructor called (Dog)" << std::endl;
}

Dog::Dog( const Dog& src ): Animal(src)
{
	std::cout << "Copy constructor called (Dog)" << std::endl;
}

Dog::~Dog( void )
{
	std::cout << "Destructor called (Dog)" << std::endl;
}

Dog&		Dog::operator=( const Dog& src )
{
	(void)src;
	return *this;
}

void		Dog::makeSound( void ) const
{
	std::cout << "_________|Dog sounds|________" << std::endl;
	std::cout << "|         ,                 |" << std::endl;
	std::cout << "|         |`-.__            |" << std::endl;
	std::cout << "|         / ' _/            |" << std::endl;
	std::cout << "|        ****`     Woof!    |" << std::endl;
	std::cout << "|       /    }              |" << std::endl;
	std::cout << "|      /  \\ /               |" << std::endl;
	std::cout << "|  \\ /`   \\\\\\               |" << std::endl;
	std::cout << "|   `\\    /_\\\\              |" << std::endl;
	std::cout << "|    `~~~~~``~`             |" << std::endl;
	std::cout << "⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺⎺" << std::endl << std::endl;
}
