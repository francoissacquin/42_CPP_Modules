#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <iostream>
#include <stdint.h>

typedef struct		s_Data
{
	char	char_data;
	int		int_data;
	float	float_data;
	double	double_data;
}					Data;

void			print_struct(Data *ptr);

uintptr_t		serialize(Data *ptr);
Data *			deserialize(uintptr_t raw);

#endif
