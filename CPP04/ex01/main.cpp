#include "Dog.hpp"
#include "Cat.hpp"

int		main( void )
{
	std::cout << "-----------------------------" << std::endl;
	std::cout << "Initiating good pets sequence" << std::endl;
	std::cout << "-----------------------------" << std::endl;
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();
	const Animal**	array = new const Animal*[10];

	std::cout << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "MakeSound is still working fine" << std::endl;
	std::cout << "-------------------------------" << std::endl;
	std::cout << "Type = " << i->get_type() << " " << std::endl;
	std::cout << "Type = " << j->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Creating an array of Dogs and Cats" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	for (int k = 0; k < 10; k++)
	{
		if (k % 2 == 0)
			array[k] = new Dog;
		else
			array[k] = new Cat;
	}

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Deleting an array of Dogs and Cats" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	for (int l = 0; l < 10; l++)
	{
		delete array[l];
	}

	std::cout << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Cloning a very good boy for science" << std::endl;
	std::cout << "-----------------------------------" << std::endl;
	std::cout << "Making a good boy" << std::endl;
	const Dog*	good_boy = new Dog();
	std::cout << "Creating a copy of a good boy:" << std::endl;
	const Dog*	copy = new Dog(*good_boy);
	std::cout << "Address of the good boy brain             : " << &(*(good_boy->get_brain_access())) << std::endl;
	std::cout << "Address of the copy of the good boy brain : " << &(*(copy->get_brain_access())) << std::endl;

	std::cout << std::endl;
	std::cout << "--------------------" << std::endl;
	std::cout << "Deleting all animals" << std::endl;
	std::cout << "--------------------" << std::endl;
	delete good_boy;
	delete copy;
	delete meta;
	delete j;
	delete i;

	return 0;
}
