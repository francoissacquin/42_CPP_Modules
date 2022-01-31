
#include <string>
#include <iostream>

int		main( void )
{
	std::string		str = "HI THIS IS BRAIN";
	std::string*	stringPTR = &str;
	std::string&	stringREF = str;

	std::cout << "This is the string address    : " << &str << std::endl;
	std::cout << "This is the pointer address   : " << stringPTR << std::endl;
	std::cout << "This is the reference address : " << &stringREF << std::endl << std::endl;

	std::cout << "This is the string displayed by itself            : " << str << std::endl;
	std::cout << "This is the string displayed through a pointer    : " << *stringPTR << std::endl;
	std::cout << "This is the string displayed througha a reference : " << stringREF << std::endl;
}
