#include "Base_A_B_C.hpp"

int		main()
{
	for (int i = 0; i < 10; i++)
	{
		Base *	surprise_class = generate();
		std::cout << "pointer identification   : ";
		identify(surprise_class);
		std::cout << std::endl;
		std::cout << "reference identification : ";
		identify(*surprise_class);
		std::cout << std::endl << std::endl;
		delete surprise_class;
	}
	return (0);
}
