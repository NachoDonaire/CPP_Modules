#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &we) : _name(name), w(we){
}
/*
{
	this->name = name;
	this->w = we;
}
*/
HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	if (this->w.getType() == "")
		std::cout << "no weapon to attack" << std::endl;
	std::cout << _name << " attacks with their " << this->w.getType() << std::endl;
}
