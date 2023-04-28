#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	private:
		std::string	_name;
		Weapon 		&w;
	public:
		HumanA(std::string, Weapon &we);
		~HumanA();
		void	attack();
};

#endif
