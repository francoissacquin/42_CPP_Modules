#include "Bureaucrat.hpp"
#include "Form.hpp"

int		main()
{
	std::cout << "----------------------" << std::endl;
	std::cout << "A short nameless life:" << std::endl;
	std::cout << "----------------------" << std::endl;
	try
	{
		Bureaucrat	Jerry;
		Form		form_example("example", 32, 123);
		std::cout << Jerry << std::endl;
		std::cout << form_example << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "------------------------" << std::endl;
	std::cout << "Works on the first time:" << std::endl;
	std::cout << "------------------------" << std::endl;
	try
	{
		Bureaucrat	Patrick("Patrick", 1);
		Form		form_1("A_1", 150, 150);
		std::cout << Patrick << std::endl;
		std::cout << form_1 << std::endl;
		Patrick.signForm(form_1);
		Patrick.up_grade();
		std::cout << "If you see this string, the error was not caught properly" << std::endl;
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
	std::cout << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	std::cout << "Can't sign this form, boss, i need an upgrade:" << std::endl;
	std::cout << "-----------------------------------------" << std::endl;
	try
	{
		Bureaucrat	Dan("Dan", 51);
		Form		form_2("A_2", 50, 50);
		std::cout << Dan << std::endl;
		std::cout << form_2 << std::endl;
		Dan.signForm(form_2);
		Dan.up_grade();
		Dan.signForm(form_2);
		Dan.signForm(form_2);
	}
	catch(std::exception & error)
	{
		std::cout << error.what() << std::endl;
	}
}
