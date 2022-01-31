#include "Serialization.hpp"

int			main()
{
	Data	data;
	Data *	data_ptr;

	data_ptr =  &data;

	data_ptr->char_data = 'a';
	data_ptr->int_data = 462;
	data_ptr->float_data = 0.5f;
	data_ptr->double_data = 247;

	print_struct(data_ptr);

	uintptr_t	raw;
	raw = serialize(data_ptr);

	Data *		data_ptr_2;
	data_ptr_2 = deserialize(raw);

	std::cout << std::endl;
	std::cout << "Original Data structure pointer              : " << data_ptr << std::endl;
	std::cout << "Serialized Data pointer in uintptr_t format  : " << raw << std::endl;
	std::cout << "Deserialized Data structure pointer          : " << data_ptr_2 << std::endl;

	std::cout << std::endl;
	print_struct(data_ptr_2);

	return (0);
}
