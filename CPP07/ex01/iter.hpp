#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void		iter(T array[], std::size_t length, void(*f)(const T & unit))
{
	for (std::size_t i = 0; i < length; i++)
		(*f)(array[i]);
}

template<typename T>
void		print_unit(const T & unit)
{
	std::cout << "|" << unit << "|" << " ";
}

#endif
