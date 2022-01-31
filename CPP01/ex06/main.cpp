# include "Karen.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Error: number of argument is invalid" << std::endl;
		return 0;
	}
	Karen		Karen_1;
	Karen_1.complain(argv[1]);
	return 0;
}
