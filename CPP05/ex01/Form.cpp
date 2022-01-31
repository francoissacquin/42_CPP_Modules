#include "Form.hpp"

Form::Form( void ): _name(""),_signed(0), _grade_to_sign(150), _grade_to_execute(150)
{
	std::cout << "Default constructor called (Form)" << std::endl;
}

Form::Form( std::string name, int grade_to_sign, int grade_to_execute ): _name(name), _signed(0), _grade_to_sign(grade_to_sign), _grade_to_execute(grade_to_execute)
{
	std::cout << "Typed constructor called (Form)" << std::endl;
	if (_grade_to_sign < 1 || _grade_to_sign > 150)
		throw Form::GradeTooHighException();
	if (_grade_to_execute < 1 || _grade_to_execute > 150)
		throw Form::GradeTooHighException();
}

Form::Form( const Form & src ): _name(src._name), _signed(src._signed), _grade_to_sign(src._grade_to_sign), _grade_to_execute(src._grade_to_execute)
{
	std::cout << "Copy constructor called (Form)" << std::endl;
	if (_grade_to_sign < 1 || _grade_to_sign > 150)
		throw Form::GradeTooHighException();
	if (_grade_to_execute < 1 || _grade_to_execute > 150)
		throw Form::GradeTooHighException();
}

Form::~Form( void )
{
	std::cout << "Default destructor called (Form)" << std::endl;
}

Form &			Form::operator=( const Form & rhs )
{
	if (this != &rhs)
	{
		_signed = rhs._signed;
	}
	return *this;
}

std::string		Form::getName( void ) const
{
	return this->_name;
}

bool			Form::getSigned( void ) const
{
	return this->_signed;
}

int				Form::getGradeToSign( void ) const
{
	return this->_grade_to_sign;
}

int				Form::getGradeToExecute( void ) const
{
	return this->_grade_to_execute;
}

void			Form::beSigned( const Bureaucrat & bureaucrat )
{
	if (this->_signed == true)
		throw Form::FormSignedException();
	if (bureaucrat.getGrade() > this->_grade_to_sign)
		throw Form::GradeTooLowException();
	this->_signed = true;
}

std::ostream &		operator<<( std::ostream & o, const Form & rhs )
{
	if (rhs.getSigned() == false)
		o << "Form " << rhs.getName() << " <unsigned contract> with:";
	else
		o << "Form " << rhs.getName() << " <signed contract> with:";
	o << " Grade to sign -> " << rhs.getGradeToSign() << " and Grade to execute -> " << rhs.getGradeToExecute();
	return o;
}