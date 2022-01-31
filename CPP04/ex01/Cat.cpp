#include "Cat.hpp"

Cat::Cat( void ): Animal("Cat")
{
	std::cout << "Default constructor called (Cat)" << std::endl;
	this->_cat_brain = new Brain();
}

Cat::Cat( const Cat& src ): Animal(src)
{
	std::cout << "Copy constructor called (Cat)" << std::endl;
	this->_cat_brain = new Brain(*src._cat_brain);
}

Cat::~Cat( void )
{
	std::cout << "Destructor called (Cat)" << std::endl;
	delete _cat_brain;
}

Cat&		Cat::operator=( const Cat& src )
{
	if (this != &src)
	{
		delete _cat_brain;
		_cat_brain = new Brain(*src._cat_brain);
	}
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

Brain*		Cat::get_brain_access( void ) const
{
	return (this->_cat_brain);
}
