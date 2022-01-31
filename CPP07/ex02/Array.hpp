#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <stdlib.h>
#include <time.h>

template<typename T>
class Array
{
private:
	T *						_ptr;
	unsigned int			_size;

public:
	class InvalidIndexException: public std::exception
	{
		public:
			virtual const char *	what() const throw()
			{
				return "Index is out of array limits";
			}
	};

	Array( void ): _ptr(NULL), _size(0)
	{
		//nothing here
	};

	Array( unsigned int n ): _size(n)
	{
		_ptr = new T[n];
	};

	Array( const Array & src ): _size(src._size)
	{
		_ptr = new T[_size];
		for (unsigned int i = 0; i < _size; i++)
		{
			_ptr[i] = src._ptr[i];
		}
	};

	~Array( void )
	{
		delete[] _ptr;
	};

	Array &			operator=( const Array & rhs )
	{
		if (this != &rhs)
		{
			_size = rhs._size;
			delete[] _ptr;
			_ptr = new T[_size];
			for (unsigned int i = 0; i < _size; i++)
			{
				_ptr[i] = rhs._ptr[i];
			}
		}
		return *this;
	};

	T &				operator[]( unsigned int index )
	{
		if (index >= _size)
			throw InvalidIndexException();
		return (*(_ptr + index));
	};

	unsigned int	size( void ) const
	{
		return _size;
	};
};

#endif
