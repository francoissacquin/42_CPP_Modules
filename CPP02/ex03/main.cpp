#include "Fixed.hpp"
#include "Point.hpp"

bool	bsp( const Point a, const Point b, const Point c, const Point point );

int		main( void )
{
	std::cout << std::boolalpha << "Testing different triangles :" << std::endl << std::endl;

	std::cout << "bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point(3, 3)) : ";
	std::cout << bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point(3, 3)) << std::endl << std::endl;

	std::cout << "bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point(-5, -5)) : ";
	std::cout << bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point(-5, -5)) << std::endl << std::endl;

	std::cout << "bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point(3.67, 2.89)) : ";
	std::cout << bsp(Point(2, 5), Point(6, 2), Point(1, 1), Point((float)3.67, (float)2.89)) << std::endl << std::endl;

	std::cout << "bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0, 0)) : ";
	std::cout << bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0, 0)) << std::endl << std::endl;

	std::cout << "bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0.5, 0.5)) : ";
	std::cout << bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point((float)0.5, (float)0.5)) << std::endl << std::endl;

	std::cout << "bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0.01f, 0.01f)) : ";
	std::cout << bsp(Point(0, 0), Point(1, 0), Point(0, 1), Point(0.01f, 0.01f)) << std::endl << std::endl;

	std::cout << "bsp(Point(1, 1), Point(-2, 31), Point(40, -3), Point(-50, -50)) : ";
	std::cout << bsp(Point(1, 1), Point(-2, 31), Point(40, -3), Point(-50, -50)) << std::endl;

	return 0;
}
// Pour tester avec un calculateur en ligne :
// https://planetcalc.com/8108/
