#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
	Form *		Form_array[3];

public:
	class InvalidFormNameException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Form could not be created: No form with this name has been found";
			}
	};

	Intern( void );
	Intern( const Intern & src );
	~Intern( void );

	Intern &			operator=( const Intern & rhs );

	Form *				makeForm(std::string form_name, std::string target );
};

#endif
