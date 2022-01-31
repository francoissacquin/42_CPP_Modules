# include "Karen.hpp"

int		main()
{
	std::cout << "Starting test main" << std::endl;
	std::cout << "Creating Karen class:" << std::endl;
	Karen	Karen_1;
	std::cout << "Testing DEBUG, INFO, WARNING and ERROR levels:" <<std::endl;
	std::cout << std::endl << "Karen_1.complain(\"DEBUG\"):" << std::endl;
	Karen_1.complain("DEBUG");
	std::cout << std::endl << "Karen_1.complain(\"INFO\"):" << std::endl;
	Karen_1.complain("INFO");
	std::cout << std::endl << "Karen_1.complain(\"WARNING\"):" << std::endl;
	Karen_1.complain("WARNING");
	std::cout << std::endl << "Karen_1.complain(\"ERROR\"):" << std::endl;
	Karen_1.complain("ERROR");
	std::cout << std::endl << "Testing with incorrect level as parameter \"jkcbzeiyfv\":" << std::endl;
	Karen_1.complain("jkcbzeiyfv");
	return 0;
}