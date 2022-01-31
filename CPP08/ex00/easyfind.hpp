#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>

template <typename T>
typename T::iterator	easyfind(T haystack, const int & needle)
{
	typename T::iterator		ret;

	ret = std::find(haystack.begin(), haystack.end(), needle);
	return ret;
}

#endif
