#include "Scalar_Conversion.hpp"

int		main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Invalid number of argument, please use as : ./Convert <string here>" << std::endl;
		return 0;
	}
	Scalar_Conversion		Conversion_hub(argv[1]);
	Conversion_hub.convert_all();
	return 0;
}

