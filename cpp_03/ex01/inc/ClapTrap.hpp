#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include "iostream"
#include "unistd.h"

class	ClapTrap
{
	public:
		std::string	name;
		int		hit_points;
		int		energy_points;
		int		attack_dmg;

		ClapTrap();
		ClapTrap(std::string namecillo);
		~ClapTrap();
		ClapTrap(const ClapTrap& c);
		ClapTrap operator=(const ClapTrap c);
		void	attack(const std::string &target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
};

#endif
