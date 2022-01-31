#include "Bureaucrat.hpp"

int		main()
{
	std::cout << "----------------------" << std::endl;
	std::cout << "A short nameless life:" << std::endl;
	std::cout << "----------------------" << std::endl;
	try
	{
		Bureaucrat	Jerry;
		std::cout << Jerry << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Creating a bottom-rug and de-grading him:" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	try
	{
		Bureaucrat	Dan("Dan", 150);
		std::cout << Dan << std::endl;
		Dan.up_grade();
		std::cout << Dan << std::endl;
		Dan.de_grade();
		std::cout << Dan << std::endl;
		Dan.de_grade();
		std::cout << "If this message appears, the error was not caught properly" << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	std::cout << "Creating a top of the barrel and up-grading him:" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	try
	{
		Bureaucrat	Dan("Dan", 1);
		std::cout << Dan << std::endl;
		Dan.up_grade();
		std::cout << "If this message appears, the error was not caught properly" << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
}
