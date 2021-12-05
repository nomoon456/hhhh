#include "DiamondTrap.hpp"

int main() {
	DiamondTrap diamondTrap("Joe");
	diamondTrap.whoAmI();
	std::cout << std::endl << diamondTrap << std::endl;
	diamondTrap.attack("hhhh");
	diamondTrap.takeDamage(10);
	diamondTrap.beRepaired(15);
	return (0);
}