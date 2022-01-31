#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int			main( void )
{
	try
	{
		std::cout << "-----------------------------------------------" << std::endl;
		std::cout << "Creating 3 different bureaucrats and an intern:" << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
		Bureaucrat		little_crook("Little Crook", 120);
		Bureaucrat		mafia_boss("Mafia Boss", 40);
		Bureaucrat		the_godfather("The Godfather", 1);
		Intern			Josh;
		std::cout << little_crook << std::endl;
		std::cout << mafia_boss << std::endl;
		std::cout << the_godfather << std::endl;
		std::cout << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Creating 3 forms with intern josh:" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		Form	*Shrub_2 = Josh.makeForm("ShrubberyCreationForm", "josh");
		Form	*Robot_2 = Josh.makeForm("RobotomyRequestForm", "josh");
		Form	*Pardon_2 = Josh.makeForm("PresidentialPardonForm", "josh");
		std::cout << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		std::cout << "Signing and executing Josh-created forms:" << std::endl;
		std::cout << "-----------------------------------------" << std::endl;
		little_crook.signForm(*Shrub_2);
		little_crook.executeForm(*Shrub_2);
		mafia_boss.signForm(*Robot_2);
		mafia_boss.executeForm(*Robot_2);
		the_godfather.signForm(*Pardon_2);
		the_godfather.executeForm(*Pardon_2);
		std::cout << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Properly destroying the used forms:" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete Shrub_2;
		delete Robot_2;
		delete Pardon_2;
		std::cout << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		std::cout << "Creating an incorrect form with intern josh:" << std::endl;
		std::cout << "--------------------------------------------" << std::endl;
		Form	*nonsense = Josh.makeForm("nonsense", "josh");
		std::cout << "If this message is displayed, the error was not properly caught" << std::endl;
		delete nonsense;
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}

	return 0;
}
