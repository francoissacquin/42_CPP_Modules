#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "DiamondTrap.hpp"

int			main( void )
{
	std::cout << "Initiating DiamondTrap production:" << std::endl << std::endl;

	DiamondTrap	Amandine("Amandine");

	std::cout << "These are " << Amandine.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Amandine.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Amandine.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Amandine.get_attack_damage() << std::endl << std::endl;

	DiamondTrap	Dan("Dan");

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Amandine.attack(Dan.get_name());
	Dan.takeDamage(Amandine.get_attack_damage());

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Dan.beRepaired(50);

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Amandine.HighFivesGuys();
	Amandine.guardGate();
	Amandine.whoAmI();
	std::cout << std::endl;

	return 0;
}

