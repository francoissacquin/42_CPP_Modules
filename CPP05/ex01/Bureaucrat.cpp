#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("[no name]"), _grade(150)
{
	std::cout << "Default constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat( std::string name, int grade ): _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Named/Graded constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::Bureaucrat( const Bureaucrat & src )
{
	*this = src;
	std::cout << "Copy constructor called (Bureaucrat)" << std::endl;
}

Bureaucrat::~Bureaucrat( void )
{
	std::cout << "Default destructor called (Bureaucrat)" << std::endl;
}

Bureaucrat &		Bureaucrat::operator=( const Bureaucrat & rhs )
{
	if (this != &rhs)
	{
		this->_grade = rhs._grade;
	}
	return *this;
}

std::string			Bureaucrat::getName( void ) const
{
	return this->_name;
}

int					Bureaucrat::getGrade( void ) const
{
	return this->_grade;
}

void				Bureaucrat::up_grade( void )
{
	if (this->_grade > 1)
	{
		this->_grade--;
		std::cout << this->getName() << " has been promoted." << std::endl;
	}
	else
	{
		std::cout << "! Up_grade Failed !" << std::endl;
		throw Bureaucrat::GradeTooHighException();
	}
}

void				Bureaucrat::de_grade( void )
{
	if (this->_grade < 150)
	{
		this->_grade++;
		std::cout << this->getName() << " has been demoted." << std::endl;
	}
	else
	{
		std::cout << "! De_grade Failed !" << std::endl;
		throw Bureaucrat::GradeTooLowException();
	}
}

void				Bureaucrat::signForm( Form & form )
{
	try
	{
		form.beSigned(*this);
		std::cout << *this << " signs " << form << std::endl;
	}
	catch (std::exception & error)
	{
		std::cerr << *this << " cannot sign " << form << " because : " << error.what() <<  std::endl;

	}
}

std::ostream &		operator<<( std::ostream & o, const Bureaucrat & rhs )
{
	o << rhs.getName() << ", bureaucrat grade <" << rhs.getGrade() << ">";
	return o;
}