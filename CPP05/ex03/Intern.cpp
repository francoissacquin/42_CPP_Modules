#include "Intern.hpp"

Intern::Intern( void )
{
	std::cout << "Default constructor called (Intern)" << std::endl;
	Form_array[0] = new ShrubberyCreationForm();
	Form_array[1] = new RobotomyRequestForm();
	Form_array[2] = new PresidentialPardonForm();
}

Intern::Intern( const Intern & src )
{
	std::cout << "Copy constructor called (Intern)" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		this->Form_array[i] = src.Form_array[i];
	}
}

Intern::~Intern( void )
{
	std::cout << "Default destructor called (Intern)" << std::endl;
	for (int i = 0; i < 3; i++)
	{
		delete Form_array[i];
	}
}

Intern &			Intern::operator=(const Intern & rhs)
{
	if (this != &rhs)
	{
		for (int i = 0; i < 3; i++)
		{
			delete this->Form_array[i];
			this->Form_array[i] = rhs.Form_array[i];
		}
	}
	return *this;
}

Form *				Intern::makeForm( std::string form_name, std::string target)
{
	for (int i = 0; i < 3; i++)
	{
		if (form_name == this->Form_array[i]->getName())
		{
			Form * clone = this->Form_array[i]->clone(target);
			std::cout << "Intern creates " << *clone << std::endl;
			return clone;
		}
	}
	throw InvalidFormNameException();
}
