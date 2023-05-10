#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <ScavTrap.hpp>

class FragTrap : virtual public ClapTrap
{
	public:
		FragTrap();
		FragTrap(std::string namecillo);
		~FragTrap();
		FragTrap &operator=(const FragTrap &f);
		void 	highFivesGuys(void);

};

#endif
