#include "span.hpp"

Span::Span( unsigned int N ): _N(N)
{
	// nothing here
}

Span::Span( const Span & src ): _N(src._N), _array(src._array)
{
	// nothing here
}

Span::~Span( void )
{
	// nothing here
}

Span &			Span::operator=(const Span & rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_array = rhs._array;
	}
	return *this;
}

void			Span::addNumber( int num )
{
	if (_array.size() >= _N)
		throw ArrayIsFullException();
	_array.push_back(num);
}

void			Span::addNumber(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (end - start + _array.size() > _N)
		throw ArrayIsFullException();
	_array.insert(_array.end(), start, end);
}

unsigned int	Span::shortestSpan(void)
{
	if (_array.size() <= 1)
		throw SpanInvalidException();
	std::sort(_array.begin(), _array.end());
	unsigned int	diff;
	diff = _array[1] - _array[0];
	for (unsigned long i = 1; i < _array.size() - 1; i++)
	{
		if (_array[i] == _array[i + 1])
			return (0);
		else if ((unsigned int)(_array[i + 1] - _array[i]) < diff)
			diff = (unsigned int)(_array[i + 1] - _array[i]);
	}
	return diff;
}

unsigned int	Span::longestSpan(void)
{
	if (_array.size() <= 1)
		throw SpanInvalidException();
	int		min;
	int		max;
	min = _array[0];
	max = _array[0];
	for (unsigned long i = 0; i < _array.size(); i++)
	{
		if (_array[i] < min)
			min = _array[i];
		if (_array[i] > max)
			max = _array[i];
	}
	return static_cast<unsigned int>(abs(max - min));
}

void			Span::print_array(void)
{
	for (unsigned long i = 0; i < _array.size(); i++)
	{
		std::cout << _array[i];
		if (i != _array.size() - 1)
			std::cout << ", ";
	}
}
