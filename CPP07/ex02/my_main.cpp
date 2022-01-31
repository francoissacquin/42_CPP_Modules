#include "Array.hpp"

int		main()
{
	srand(time(0));
	std::cout << ">>> Testing the typed constructor <<<" << std::endl;
	Array<int>	a_1(10);
	std::cout << "Filling the array with random numbers:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		a_1[i] = rand() % 100;
	}
	std::cout << "Displaying the first array (a_1):  ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << a_1[i];
		if (i < 9)
			std::cout << ", ";
	}

	std::cout << std::endl << std::endl;
	std::cout << ">>> Creating a new array through the copy constructor <<<" << std::endl;
	Array<int> a_copy(a_1);
	std::cout << "Displaying the second array (a_copy):  ";
	for (int i = 0; i < 10; i++)
	{
		std::cout << a_1[i];
		if (i < 9)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << ">>> Testing the assignement operator <<<" << std::endl;
	std::cout << "Creating a new array (a_2):" << std::endl;
	Array<int> a_2(20);
	std::cout << "Filling the array (a_2) with random numbers:" << std::endl;
	for (int i = 0; i < 20; i++)
	{
		a_2[i] = rand() % 100;
	}
	std::cout << "Displaying the array (a_2):  ";
	for (int i = 0; i < 20; i++)
	{
		std::cout << a_2[i];
		if (i < 19)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}
	std::cout << "Assigning a_2 to a_1 (a_1 = a_2):" << std::endl;
	a_1 = a_2;
	std::cout << "Displaying the array (a_1):  ";
	for (int i = 0; i < 20; i++)
	{
		std::cout << a_1[i];
		if (i < 19)
			std::cout << ", ";
		else
			std::cout << std::endl;
	}

	std::cout << std::endl << std::endl;
	std::cout << ">>> Testing the size function <<<" << std::endl;
	std::cout << "a_1 has a size of : " << a_1.size() << std::endl;
	std::cout << "a_copy has a size of : " << a_copy.size() << std::endl;
	std::cout << "a_2 has a size of : " << a_2.size() << std::endl;

	std::cout << std::endl << std::endl;
	std::cout << ">>> Testing invalid indexes <<<" << std::endl;
	try
	{
		std::cout << "Accessing a_1[45]...   ";
		std::cout << a_1[45];
	}
	catch (std::exception & error)
	{
		std::cout << "Error: " << error.what() << std::endl;
	}
	try
	{
		std::cout << "Accessing a_1[-10]...   ";
		std::cout << a_1[-10];
	}
	catch (std::exception & error)
	{
		std::cout << "Error: " << error.what() << std::endl;
	}
	std::cout << std::endl;
	return (0);
}
