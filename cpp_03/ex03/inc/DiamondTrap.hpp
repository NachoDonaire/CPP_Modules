#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include <FragTrap.hpp>

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string name;
 	public:
    		DiamondTrap();
    		DiamondTrap(std::string namecillo);
    		~DiamondTrap();
    		DiamondTrap& operator=(const DiamondTrap &f);
		void 	whoAmI();
		using 	ScavTrap::attack;
};

#endif
