#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal*	meta = new Animal();
	const Animal*	j = new Dog();
	const Animal*	i = new Cat();

	std::cout << j->get_type() << " " << std::endl;
	std::cout << i->get_type() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;

	const WrongAnimal*	meto = new WrongAnimal();
	const WrongAnimal*	k = new WrongCat();

	std::cout << k->get_type() << " " << std::endl;
	k->makeSound(); //will not output the cat sound!
	meto->makeSound();

	std::cout << std::endl;

	delete meto;
	delete k;

	return 0;
}
