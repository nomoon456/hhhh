#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string const &name) : ClapTrap(name + "_clap"), FragTrap(name), ScavTrap(name), _name(name) {
    std::cout << "DiamondTrap Constructor" << std::endl;
    _energyPts = 50;
    _attackDmg = 30;
    _hitPts = 100;
}

DiamondTrap::~DiamondTrap() {
    std::cout << "DiamondTrap Destructor" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other) : ClapTrap(other), FragTrap(other), ScavTrap(other), _name(other._name) {
	std::cout << "DiamondTrap copy constructor." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap &other){
    std::cout << "DiamondTrap copy assignement" << std::endl;
    swap(*this, other);
    return (*this);
}

void    swap(DiamondTrap &f, DiamondTrap &s) {
    std::swap(f._name, s._name); //swap other instance with the present one (*this)
    std::swap(f._nameClapTrap, s._nameClapTrap);
}

void    DiamondTrap::attack(std::string const &target) {
    ScavTrap::attack(target);
}

void    DiamondTrap::whoAmI() {
    std::cout << "I'm " << _name << " and " << ClapTrap::_nameClapTrap << " is my ClapTrap name eheh" << std::endl;
}

std::ostream &operator<<(std::ostream &out, DiamondTrap const &DiamondTrap) {
    out << DiamondTrap._name << " got " << DiamondTrap._hitPts << " hp, " << DiamondTrap._energyPts << " ernegy point and " << DiamondTrap._attackDmg << " attack damage" << std::endl;
    return out;
}