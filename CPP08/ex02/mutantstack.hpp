#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack: public std::stack<T>
{
public:
	// Contructors and Destructors
	MutantStack( void ) {};
	MutantStack( const MutantStack & src ): std::stack<T>(src) {};
	~MutantStack( void ) {};

	//Operator overloads
	MutantStack &		operator=( const MutantStack & rhs )
	{
		if (this != &rhs)
		{
			static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(rhs);
		}
		return *this;
	}

	//Defining iterator types through a container type of default type deque
	typedef typename std::stack<T>::container_type				c_type;

	typedef typename c_type::iterator					iterator;
	typedef typename c_type::const_iterator				const_iterator;
	typedef typename c_type::reverse_iterator			reverse_iterator;
	typedef typename c_type::const_reverse_iterator		const_reverse_iterator;

	//Defnining all iterators linked functions
	iterator					begin( void )
	{
		return (this->c.begin());
	}

	iterator					end( void )
	{
		return (this->c.end());
	}

	const_iterator				begin( void ) const
	{
		return (this->c.begin());
	}

	const_iterator				end( void ) const
	{
		return (this->c.end());
	}

	reverse_iterator			rbegin( void )
	{
		return (this->c.rbegin());
	}

	reverse_iterator			rend( void )
	{
		return (this->c.rend());
	}

	const_reverse_iterator		rbegin( void ) const
	{
		return (this->c.rbegin());
	}

	const_reverse_iterator		rend( void ) const
	{
		return (this->c.rend());
	}
};

#endif
