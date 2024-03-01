#include "ScavTrap.hpp"

int main(){
	ClapTrap clap("clap");
	ScavTrap scav("scav");
	ScavTrap scav2 = scav;

	clap.attack("clap2");
	clap.takeDamage(5);
	clap.beRepaired(5);
	clap.attack("scav");
	scav.takeDamage(5);

	scav.guardGate();

	scav.attack("clap");
	clap.takeDamage(20);
	clap.beRepaired(20);
	return (0);
}



// int main(){
// 	ScavTrap scav("scav");

// 	scav.attack("clap");
// 	scav.takeDamage(5);
// 	scav.beRepaired(5);
// }


// int main(){
// 	ClapTrap clap("clap");
// 	ScavTrap scav("scav");

// 	scav.attack("clap");
// 	clap.attack("clap2");
// }

// int main(){
// 	ScavTrap	scav("scav");
// 	ScavTrap	scav2I(scav);

// 	std::cout << "scav2I name: " << scav2I.getName() << std::endl;
// 	std::cout << "scav2I hitPoint: " << scav2I.getHitPoint() << std::endl;
// 	std::cout << "scav2I energyPoint: " << scav2I.getEnergyPoint() << std::endl;
// 	std::cout << "scav2I attackDamage: " << scav2I.getAttackDamage() << std::endl;
// 	(void)scav;
// }
