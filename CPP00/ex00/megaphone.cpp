# include <iostream>
# include <cctype>

int		main(int argc, char **argv)
{
	int		i;
	int		j;

	if (argc < 1)
		std::cout << "Error: argument" << std::endl;
	else if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 1;
		while (i < argc)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] > 96 && argv[i][j] < 123)
					std::cout << (char) (argv[i][j] - 32);
				else
					std::cout << argv[i][j];
				j++;
			}
			std::cout << " ";
			i++;
		}
		std::cout << std::endl;
	}
	return 0;
}