#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	name;
		Weapon 		&w;
	public:
		HumanA(std::string, Weapon &w);
		~HumanA();
		void	attack();
};

#endif
