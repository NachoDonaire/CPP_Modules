#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &w)
{
	this->name = name;
	this->w = w;
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	if (this->w.getType() == "")
		std::cout << "no weapon to attack" << std::endl;
	std::cout << name << " attacks with their " << this->w.getType() << std::endl;
}
