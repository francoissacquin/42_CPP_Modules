#include "span.hpp"

int		create_rand_int(void)
{
	int		ret;
	int		sign;

	ret = rand();
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
	std::cout << std::endl << "Just a beginner test:" << std::endl;
	Span	test(5);
	test.addNumber(24);
	test.addNumber(-7);
	test.addNumber(-56);
	test.addNumber(56);
	test.addNumber(3);
	std:: cout << "the test span class contains : " << std::endl;
	test.print_array();
	std::cout << std::endl;
	std::cout << "Shortest span of test : " << test.shortestSpan() << std::endl;
	std::cout << "Longest span of test : " << test.longestSpan() << std::endl;


	std::cout << std::endl;
	std::cout << "Just a pretty big test:" << std::endl;
	std::vector<int>	vec_test = create_rand_vector(100000);
	Span				test_2(100000);
	test_2.addNumber(vec_test.begin(), vec_test.end());
	// std:: cout << "the test_2 span class contains : " << std::endl;
	// test_2.print_array();
	// std::cout << std::endl;
	std::cout << "Shortest span of test_2 : " << test_2.shortestSpan() << std::endl;
	std::cout << "Longest span of test_2 : " << test_2.longestSpan() << std::endl;

	std::cout << std::endl;
	std::cout << "Just testing errors:" << std::endl << std::endl;
	try
	{
		std::cout << "Trying to add too many elements to a span array : " << std::endl;
		Span	test_3(3);
		test_3.addNumber(24);
		test_3.addNumber(-7);
		test_3.addNumber(-56);
		test_3.addNumber(56);
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl << std::endl;
	}
	try
	{
		std::cout << "Trying to run shortestSpan and LongestSpan on a 1 value span array : " << std::endl;
		Span	test_3(3);
		test_3.addNumber(24);
		test_3.shortestSpan();
	}
	catch (std::exception & error)
	{
		std::cout << error.what() << std::endl << std::endl;
	}
	return 0;
}
