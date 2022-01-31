#include "iter.hpp"
#include "test.hpp"
#include <cstring>

int		main()
{
	char	char_array[] = "This is a string";
	iter(char_array, strlen(char_array), print_unit);
	std::cout << std::endl << std::endl;

	int		int_array[] = {56, 4, -1, -65, 9875, 0};
	iter(int_array, 6, print_unit);
	std::cout << std::endl << std::endl;

	float	float_array[] = {56.0, 4.5834, 1.0001, 65, 9875.5421, 0};
	iter(float_array, 6, print_unit);
	std::cout << std::endl << std::endl;

	Test	class_array[5];
	iter(class_array, 5, print_unit);
	std::cout << std::endl << std::endl;
}