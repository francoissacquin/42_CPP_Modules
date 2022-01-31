#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void		swap( T & arg_1, T & arg_2 )
{
	T	temp = arg_1;
	arg_1 = arg_2;
	arg_2 = temp;
}

template <typename T>
const T &	min(const T & arg_1, const T & arg_2)
{
	if (arg_2 <= arg_1)
		return arg_2;
	return arg_1;
}

template <typename T>
const T &	max(const T & arg_1, const T & arg_2)
{
	if (arg_2 >= arg_1)
		return arg_2;
	return arg_1;
}

#endif
