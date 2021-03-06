//
// Created by Marleen Maryjane on 1/15/22.
//

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"


class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const std::string &name);
	ScavTrap(ScavTrap const &src);
	~ScavTrap();
	ScavTrap& operator=(const ScavTrap &rhs);

	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void guardGate();

};
#endif //SCAVTRAP_HPP
