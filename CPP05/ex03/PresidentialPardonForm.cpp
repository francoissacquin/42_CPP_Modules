#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ): Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "Default constructor called (PresidentialPardonForm)" << std::endl;
	this->_target = "[no target defined]";
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): Form("PresidentialPardonForm", 25, 5)
{
	std::cout << "Typed constructor called (PresidentialPardonForm)" << std::endl;
	this->_target = target;
}

PresidentialPardonForm::PresidentialPardonForm( const PresidentialPardonForm & src ): Form(src)
{
	std::cout << "Copy constructor called (PresidentialPardonForm)" << std::endl;
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm( void )
{
	std::cout << "Default destructor called (PresidentialPardonForm)" << std::endl;
}

PresidentialPardonForm &			PresidentialPardonForm::operator=( const PresidentialPardonForm & rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

void								PresidentialPardonForm::executeForm( void ) const
{
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}

Form *								PresidentialPardonForm::clone( std::string target )
{
	Form *	clone = new PresidentialPardonForm(target);
	return clone;
}
