#ifndef	SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <ClapTrap.hpp>

class	ScavTrap : public ClapTrap
{
	public:
		ScavTrap();
		ScavTrap(std::string namecillo);
		~ScavTrap();
		ScavTrap &operator=(const  ScavTrap &s);
		void	guardGate();
		void	attack(std::string const &target);
};

#endif
