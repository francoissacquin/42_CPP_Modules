#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"


int			main( void )
{
	try
	{
		std::cout << "---------------------------------" << std::endl;
		std::cout << "Creating 3 different bureaucrats:" << std::endl;
		std::cout << "---------------------------------" << std::endl;
		Bureaucrat		little_crook("Little Crook", 120);
		Bureaucrat		mafia_boss("Mafia Boss", 40);
		Bureaucrat		the_godfather("The Godfather", 1);
		std::cout << little_crook << std::endl;
		std::cout << mafia_boss << std::endl;
		std::cout << the_godfather << std::endl;
		std::cout << std::endl;
		std::cout << "---------------------------" << std::endl;
		std::cout << "Creating 3 different forms:" << std::endl;
		std::cout << "---------------------------" << std::endl;
		Form	*Shrub = new ShrubberyCreationForm("just_a_shrub_to_test");
		Form	*Robot = new RobotomyRequestForm("little_crook");
		Form	*Pardon = new PresidentialPardonForm("a questionable individual");
		std::cout << *Shrub << std::endl;
		std::cout << *Robot << std::endl;
		std::cout << *Pardon << std::endl;
		std::cout << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
		std::cout << "Showing they can all be signed and executed properly:" << std::endl;
		std::cout << "-----------------------------------------------------" << std::endl;
		little_crook.signForm(*Shrub);
		little_crook.executeForm(*Shrub);
		mafia_boss.signForm(*Robot);
		mafia_boss.executeForm(*Robot);
		the_godfather.signForm(*Pardon);
		the_godfather.executeForm(*Pardon);
		std::cout << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Properly destroying the used forms:" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete Shrub;
		delete Robot;
		delete Pardon;
		std::cout << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		std::cout << "Creating 2 new forms with new targets:" << std::endl;
		std::cout << "-------------------------------------" << std::endl;
		Form	*Robot_2 = new RobotomyRequestForm("a robot");
		Form	*Pardon_2 = new PresidentialPardonForm("a goat");
		std::cout << "-------------------------------" << std::endl;
		std::cout << "Showing how errors are handled:" << std::endl;
		std::cout << "-------------------------------" << std::endl;
		// Grade too low to sign
		little_crook.signForm(*Robot_2);

		// Grade too low to execute
		mafia_boss.signForm(*Robot_2);
		little_crook.executeForm(*Robot_2);

		// Form not signed for execution
		the_godfather.executeForm(*Pardon_2);
		std::cout << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		std::cout << "Properly destroying the used forms:" << std::endl;
		std::cout << "-----------------------------------" << std::endl;
		delete Robot_2;
		delete Pardon_2;
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}

	return 0;
}
