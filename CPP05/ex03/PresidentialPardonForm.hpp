#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string		_target;

public:
	PresidentialPardonForm( void );
	PresidentialPardonForm( std::string target );
	PresidentialPardonForm( const PresidentialPardonForm & src );
	~PresidentialPardonForm( void );

	PresidentialPardonForm &		operator=( const PresidentialPardonForm & rhs );

	void						executeForm( void ) const;
	Form *						clone( std::string target );
};

#endif