#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <stdlib.h>
#include <time.h>

class RobotomyRequestForm : public Form
{
private:
	std::string			_target;
public:
	RobotomyRequestForm( void );
	RobotomyRequestForm( std::string target );
	RobotomyRequestForm( const RobotomyRequestForm & src );
	~RobotomyRequestForm( void );

	RobotomyRequestForm &		operator=( const RobotomyRequestForm & rhs );

	void						executeForm( void ) const;
};

#endif
