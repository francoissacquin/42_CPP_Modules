#include "Base_A_B_C.hpp"

Base *		generate()
{
	int		i;

	//srand(time(0));
	i = rand() % 3;
	if (i == 0)
	{
		// std::cout << "Class A generated" << std::endl;
		return new A;
	}
	else if (i == 1)
	{
		// std::cout << "Class B generated" << std::endl;
		return new B;
	}
	else
	{
		// std::cout << "Class C generated" << std::endl;
		return new C;
	}
}

void		identify(Base * p)
{
	A *		tester_A = dynamic_cast<A *>(p);
	B *		tester_B = dynamic_cast<B *>(p);
	C *		tester_C = dynamic_cast<C *>(p);

	if (tester_A != NULL)
		std::cout << "A";
	else if (tester_B != NULL)
		std::cout << "B";
	else if (tester_C != NULL)
		std::cout << "C";
	else
		std::cout << "Error: Base pointer belongs to neither A, B nor C";
}

void		identify(Base & p)
{
	try
	{
		A &		tester_A = dynamic_cast<A &>(p);
		(void)tester_A;
		std::cout << "A";
		return ;
	}
	catch (std::exception & error)
	{}
	try
	{
		B &		tester_B = dynamic_cast<B &>(p);
		(void)tester_B;
		std::cout << "B";
		return ;
	}
	catch (std::exception & error)
	{}
	try
	{
		C &		tester_C = dynamic_cast<C &>(p);
		(void)tester_C;
		std::cout << "C";
		return ;
	}
	catch (std::exception & error)
	{}
	std::cout << "Error: Base reference belongs to neither A, B nor C";
}
