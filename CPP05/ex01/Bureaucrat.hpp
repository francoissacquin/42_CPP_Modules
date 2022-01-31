#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
private:
	const std::string	_name;
	int					_grade;

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

	Bureaucrat( void );
	Bureaucrat( std::string name, int grade );
	Bureaucrat( const Bureaucrat & src );
	~Bureaucrat( void );

	Bureaucrat &		operator=( const Bureaucrat & rhs );

	std::string			getName( void ) const;
	int					getGrade( void ) const;
	void				up_grade( void );
	void				de_grade( void );
	void				signForm( Form & form );
};

std::ostream &			operator<<( std::ostream & o, const Bureaucrat & rhs );


#endif