#include "FragTrap.hpp"

int			main( void )
{
	std::cout << "Initiating FragTrap production:" << std::endl << std::endl;

	ClapTrap	Lea("Lea");

	std::cout << "These are " << Lea.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Lea.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Lea.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Lea.get_attack_damage() << std::endl << std::endl;

	FragTrap	Billy("Billy");

	std::cout << "These are " << Billy.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Billy.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Billy.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Billy.get_attack_damage() << std::endl << std::endl;

	FragTrap	Dan("Dan");

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Billy.attack(Dan.get_name());
	Dan.takeDamage(Billy.get_attack_damage());

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Dan.beRepaired(5);

	std::cout << "These are " << Dan.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Dan.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Dan.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Dan.get_attack_damage() << std::endl << std::endl;

	Billy.HighFivesGuys();
	Dan.HighFivesGuys();
	std::cout << std::endl;

	return 0;
}
