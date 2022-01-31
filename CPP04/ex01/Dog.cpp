#include "Dog.hpp"

Dog::Dog( void ): Animal("Dog")
{
	std::cout << "Default constructor called (Dog)" << std::endl;
	this->_dog_brain = new Brain();
}

Dog::Dog( const Dog& src ): Animal(src)
{
	std::cout << "Copy constructor called (Dog)" << std::endl;
	this->_dog_brain = new Brain(*src._dog_brain);
}

Dog::~Dog( void )
{
	std::cout << "Destructor called (Dog)" << std::endl;
	delete _dog_brain;
}

Dog&		Dog::operator=( const Dog& src )
{
	if (this != &src)
	{
		delete _dog_brain;
		_dog_brain = new Brain(*src._dog_brain);
	}
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

Brain*		Dog::get_brain_access( void ) const
{
	return (this->_dog_brain);
}
