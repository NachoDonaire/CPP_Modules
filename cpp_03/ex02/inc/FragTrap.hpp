#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ScavTrap.hpp>

class FragTrap : public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string namecillo);
		~FragTrap();
		FragTrap &operator=(const ScavTrap &f);
		void 	highFivesGuys(void);

};

#endif
