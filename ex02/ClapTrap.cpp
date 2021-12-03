#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
    std::cout << "ClapTrap Constructor" << std::endl;
    _name = "";
    _energyPts = 10;
    _hitPts = 10;
    _attackDmg = 0;
}

ClapTrap::ClapTrap(const std::string &rName) : _name(rName) {
    std::cout << "ClapTrap Copy Constructor" << std::endl;
    _energyPts = 10;
    _hitPts = 10;
    _attackDmg = 0;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor Called" << std::endl;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & other) {
    if (this != &other)
    {
        std::cout << "ClapTrap Copy Assignement" << std::endl;
        this->_name = other._name;
        this->_energyPts = other._energyPts;
        this->_hitPts = other._hitPts;
        this->_attackDmg = other._attackDmg;
    }
    return *this;
}

ClapTrap::ClapTrap(const ClapTrap &other) {
    std::cout << "ClapTrap Copy Constructor" << std::endl;
    *this = other;
}

void    ClapTrap::attack(const std::string &target) {
    std::cout << "ClapTrap " << _name << " attack " << target << ", causing " << _hitPts << " points of damage! " << std::endl;
}

void    ClapTrap::takeDamage(uint32_t amount) {
    if (_hitPts - amount < 0)
        return ;
    _hitPts -= amount;
    if (_hitPts < 0)
        _hitPts = 0;
    std::cout << _name << " took " << amount << " damage" << std::endl;
}

void    ClapTrap::beRepaired(uint32_t amount) {
    _hitPts += amount;
    std::cout << _name << " got healed " << amount << " points" << std::endl;
}

std::ostream &operator<<(std::ostream &out, ClapTrap const & ClapTrap) {
    out << ClapTrap._name << " got " << ClapTrap._hitPts << " hp, " << ClapTrap._energyPts << " ernegy point and " << ClapTrap._attackDmg << " attack damage" << std::endl;
    return out;
}