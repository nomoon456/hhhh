#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class   ClapTrap {
    public:
        explicit ClapTrap(std::string const &name);
        ClapTrap(ClapTrap const &clapTrap);
        virtual ~ClapTrap();
        ClapTrap &operator=(ClapTrap const &other);
        void    attack(std::string const &t);
        void    takeDamage(uint32_t amount);
        void    beRepaired(uint32_t amount);
        friend  std::ostream &operator<<(std::ostream &out, ClapTrap const &clapTrap);
    protected:
        std::string _name;
        int         _hitPts;
        int         _energyPts;
        int         _attackDmg;
        ClapTrap();
};

#endif