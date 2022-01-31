#ifndef BASE_A_B_C_HPP
# define BASE_A_B_C_HPP

#include <stdlib.h>
#include <iostream>
#include <time.h>

class Base
{
public:
	virtual ~Base() {};
};

class A: public Base
{
	//nothing here
};

class B: public Base
{
	//nothing here
};

class C: public Base
{
	//nothing here
};

Base *		generate( void );
void		identify(Base * p);
void		identify(Base & p);

#endif
