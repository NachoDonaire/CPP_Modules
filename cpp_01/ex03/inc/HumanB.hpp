#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*w;

	public:
		HumanB(std::string);
		~HumanB();
		void	setWeapon(Weapon &w);
		void	attack();
};

#endif
