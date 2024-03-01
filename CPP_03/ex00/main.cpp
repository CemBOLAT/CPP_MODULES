#include "ClapTrap.hpp"


int main(){
	ClapTrap clap("Clap");

	clap.attack("Clap1");
	clap.attack("Clap2");
	clap.attack("Clap3");
	clap.attack("Clap4");
	clap.attack("Clap5");
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.beRepaired(5);
	clap.beRepaired(5);

	clap.beRepaired(5);
	clap.attack("Clap6");


	std::cout << clap;

	return (0);
}

// int main(){
// 	ClapTrap clap("Clap");

// 	clap.attack("Clap1");
// 	clap.takeDamage(5);
// 	clap.takeDamage(6);
// 	clap.takeDamage(6);
// 	clap.attack("Clap2");
// 	clap.beRepaired(5);

// 	std::cout << clap;
// }
