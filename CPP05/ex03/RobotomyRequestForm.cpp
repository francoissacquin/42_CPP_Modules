#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ): Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Default constructor called (RobotomyRequestForm)" << std::endl;
	this->_target = "[no target defined]";
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): Form("RobotomyRequestForm", 72, 45)
{
	std::cout << "Typed constructor called (RobotomyRequestForm)" << std::endl;
	this->_target = target;
}

RobotomyRequestForm::RobotomyRequestForm( const RobotomyRequestForm & src ): Form(src)
{
	std::cout << "Copy constructor called (RobotomyRequestForm)" << std::endl;
	this->_target = src._target;
}

RobotomyRequestForm::~RobotomyRequestForm( void )
{
	std::cout << "Default destructor called (RobotomyRequestForm)" << std::endl;
}

RobotomyRequestForm &			RobotomyRequestForm::operator=( const RobotomyRequestForm & rhs )
{
	if (this != &rhs)
	{
		this->_target = rhs._target;
		this->setSigned(rhs.getSigned());
	}
	return *this;
}

void							RobotomyRequestForm::executeForm( void ) const
{
	int		i;

	srand(time(0));
	i = rand() % 2;
	std::cout << "Trrrrrrrrrrriiiiiiiiiiit Trrrrrrrrrrriiiiiiiiiiit ! ";
	if (i == 1)
		std::cout << this->_target << " got successfully robotomized..." << std::endl;
	else
		std::cout << this->_target << "'s robotomy failed..." << std::endl;
}

Form *								RobotomyRequestForm::clone( std::string target )
{
	Form *	clone = new RobotomyRequestForm(target);
	return clone;
}
