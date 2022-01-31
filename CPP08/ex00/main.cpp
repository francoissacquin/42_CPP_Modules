#include "easyfind.hpp"

#include <time.h>

#include <vector>

int		create_rand_int(void)
{
	int		ret;
	int		sign;

	ret = rand() % 100;
	sign = rand() % 2;
	if (sign == 1)
		return ret;
	return -1 * ret;
}

std::vector<int>		create_rand_vector(unsigned int size)
{
	std::vector<int>		ret(size);

	std::generate(ret.begin(), ret.end(), create_rand_int);
	return ret;
}

int		main()
{
	srand(time(0));
	std::cout << "Testing with 5 different 100 element vectors:" << std::endl;
	for (int i = 0; i < 10; i++)
	{
		std::vector<int> 				vec = create_rand_vector(100);
		std::vector<int>::iterator	it;
		int							needle;

		std::cout << "LIST n°" << i + 1 << std::endl;
		needle = rand() % 100; // create_rand_int();
		it = easyfind(vec, needle);
		if (*it != *(vec.end()))
			std::cout << needle << " found in list at position " << std::distance(vec.begin(), it) - vec.size() << std::endl;
		else
			std::cout << "Can't find " << needle << " in the current list" << std::endl;
		std::cout << std::endl;
	}
}
