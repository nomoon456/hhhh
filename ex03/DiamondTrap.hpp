#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap {
    public:
        explicit DiamondTrap(std::string const &name);
        DiamondTrap(DiamondTrap const &other);
        DiamondTrap &operator=(DiamondTrap &other);
        virtual     ~DiamondTrap();
        void        attack(std::string const &target);
        friend void swap(DiamondTrap &f, DiamondTrap &s);
        void        whoAmI();
        friend      std::ostream &operator<<(std::ostream &out, DiamondTrap const &diamondTrap);
    private:
        DiamondTrap();
        std::string _name;
};

#endif