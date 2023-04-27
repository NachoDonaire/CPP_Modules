#include "HumanB.hpp"


HumanB::HumanB(std::string name)
{
	this->name = name;
	this->w = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &w)
{
	this->w = &w;
}

void	HumanB::attack()
{
	if (this->w == NULL || this->w.getType() == "")
		std::cout << "no weapon to attack" << std::endl;
	std::cout << name << " attacks with their << " << this->w.getType() << std::endl;
}
