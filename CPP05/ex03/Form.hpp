#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_grade_to_sign;
	const int			_grade_to_execute;

public:
	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Grade is too high";
			}
	};

	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Grade is too low";
			}
	};

	class FormSignedException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Form has been signed already";
			}
	};

	class FormNotSignedException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Form is not signed";
			}
	};

	Form( void );
	Form( std::string name, int grade_to_sign, int grade_to_execute );
	Form( const Form & src );
	virtual ~Form( void );

	Form &				operator=( const Form & rhs );
	std::string			getName( void ) const;
	bool				getSigned( void ) const;
	void				setSigned( bool signature );
	int					getGradeToSign( void ) const;
	int					getGradeToExecute( void ) const;
	void				beSigned( const Bureaucrat & bureaucrat );
	void				execute_checking( const Bureaucrat & bureaucrat ) const;
	virtual void		executeForm( void ) const = 0;
	virtual Form*		clone( std::string target ) = 0;
};

std::ostream &		operator<<(std::ostream & o, const Form & rhs );

#endif