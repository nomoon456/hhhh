#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap() {
    std::cout << "ScavTrap Constructor" << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap Destructor" << std::endl;
}

ScavTrap::ScavTrap(std::string const &pName) : ClapTrap(pName) {
    _hitPts = 100;
    _energyPts = 50;
    _attackDmg = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
    this->_name = other._name;
    this->_energyPts = other._energyPts;
    this->_hitPts = other._hitPts;
    this->_attackDmg = other._attackDmg;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & other) {
    if (this != &other)
    {
        std::cout << "Scavtrap Copy Assignement" << std::endl;
        this->_name = other._name;
        this->_energyPts = other._energyPts;
        this->_hitPts = other._hitPts;
        this->_attackDmg = other._attackDmg;
    }
    return *this;
}

void    ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << _name << " attack " << target << ", causing " << _hitPts << " points of damage! " << std::endl;
}

void    ScavTrap::guardGate() {
    std::cout << "ScavTrap entered in gate keeper mode" << std::endl;
}

std::ostream &operator<<(std::ostream &out, ScavTrap const & ScavTrap) {
    out << ScavTrap._name << " got " << ScavTrap._hitPts << " hp, " << ScavTrap._energyPts << " ernegy point and " << ScavTrap._attackDmg << " attack damage" << std::endl;
    return out;
}