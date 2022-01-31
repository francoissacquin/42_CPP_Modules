#include "ClapTrap.hpp"

int			main( void )
{
	std::cout << "Initiating ClapTrap production:" << std::endl << std::endl;

	ClapTrap	charlie("charlie");

	std::cout << "These are " << charlie.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << charlie.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << charlie.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << charlie.get_attack_damage() << std::endl << std::endl;

	ClapTrap	theo("theo");

	std::cout << "These are " << theo.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << theo.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << theo.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << theo.get_attack_damage() << std::endl << std::endl;

	charlie.attack(theo.get_name());
	theo.takeDamage(charlie.get_attack_damage());

	std::cout << "These are " << theo.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << theo.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << theo.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << theo.get_attack_damage() << std::endl << std::endl;

	theo.beRepaired(5);

	std::cout << "These are " << theo.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << theo.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << theo.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << theo.get_attack_damage() << std::endl << std::endl;

	return 0;
}
