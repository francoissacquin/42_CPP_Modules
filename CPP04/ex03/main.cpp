
#include "Cure.hpp"
#include "Ice.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int		main( void )
{
	std::cout << "------------------------------------" << std::endl;
	std::cout << "Constructing Materia and Characters:" << std::endl;
	std::cout << "------------------------------------" << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	std::cout << std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;
	std::cout << "Testing use() function (and with an empty inventory slot)"<< std::endl;
	std::cout << "---------------------------------------------------------" << std::endl;

	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);

	std::cout << std::endl;
	std::cout << "----------------------------" << std::endl;
	std::cout << "Testing inventory size limit" << std::endl;
	std::cout << "----------------------------" << std::endl;

	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl;
	std::cout << "------------------------------" << std::endl;
	std::cout << "Testing the unequip() function" << std::endl;
	std::cout << "------------------------------" << std::endl;

	std::cout << "Spell list is :" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << std::endl << "Spell index 1 is :";
	me->use(1, *bob);
	std::cout << std::endl << "Unequipping spell index 1..." << std::endl;
	me->unequip(1);
	std::cout << std::endl << "Spell index 1 is :";
	me->use(1, *bob);
	std::cout << std::endl << "Equipping a new spell (ice) :" << std::endl;
	tmp = src->createMateria("ice");
	me->equip(tmp);

	std::cout << std::endl << "New spells are :" << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->use(2, *bob);
	me->use(3, *bob);

	std::cout << std::endl;
	std::cout << "----------------------------------" << std::endl;
	std::cout << "Destroying Materia and Characters:" << std::endl;
	std::cout << "----------------------------------" << std::endl;
	delete bob;
	delete me;
	delete src;

	return 0;
}