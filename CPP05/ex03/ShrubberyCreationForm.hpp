#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form
{
private:
	std::string			_target;

public:
	ShrubberyCreationForm( void );
	ShrubberyCreationForm( std::string target );
	ShrubberyCreationForm( const ShrubberyCreationForm & src );
	~ShrubberyCreationForm( void );

	ShrubberyCreationForm &		operator=( const ShrubberyCreationForm & rhs );

	void						executeForm( void ) const;
	Form *						clone( std::string target );
};

#endif