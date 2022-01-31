#include "Serialization.hpp"

void			print_struct(Data *ptr)
{
	std::cout << "-------DATA STRUCTURE-------" << std::endl;
	std::cout << "char_data = " << ptr->char_data << std::endl;
	std::cout << "int_data = " << ptr->int_data << std::endl;
	std::cout << "float_data = " << ptr->float_data << std::endl;
	std::cout << "double_data = " << ptr->double_data << std::endl;
	std::cout << "----------------------------" << std::endl;
}

uintptr_t		serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data *			deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
