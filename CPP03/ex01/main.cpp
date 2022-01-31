#include "ScavTrap.hpp"

int			main( void )
{
	std::cout << "Initiating ScavTrap production:" << std::endl << std::endl;

	ClapTrap	Emile("Emile");

	std::cout << "These are " << Emile.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Emile.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Emile.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Emile.get_attack_damage() << std::endl << std::endl;

	ScavTrap	Tom("Tom");

	std::cout << "These are " << Tom.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Tom.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Tom.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Tom.get_attack_damage() << std::endl << std::endl;

	ScavTrap	Bernard("Bernard");

	std::cout << "These are " << Bernard.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Bernard.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Bernard.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Bernard.get_attack_damage() << std::endl << std::endl;

	Tom.attack(Bernard.get_name());
	Bernard.takeDamage(Tom.get_attack_damage());

	std::cout << "These are " << Bernard.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Bernard.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Bernard.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Bernard.get_attack_damage() << std::endl << std::endl;

	Bernard.beRepaired(5);

	std::cout << "These are " << Bernard.get_name() << "'s stats:" << std::endl;
	std::cout << "Hitpoints     -> " << Bernard.get_hitpoints() << std::endl;
	std::cout << "Energy points -> " << Bernard.get_energy_points() << std::endl;
	std::cout << "Attack damage -> " << Bernard.get_attack_damage() << std::endl << std::endl;

	Bernard.guardGate();
	Tom.guardGate();
	std::cout << std::endl;

	return 0;
}
