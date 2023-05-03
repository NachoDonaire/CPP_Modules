#include <Weapon.hpp>
#include <HumanB.hpp>
#include <HumanA.hpp>

Weapon::Weapon(std::string type)
{
	setType(type);
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType()
{
	return (this->type);
}

void	Weapon::setType(std::string newType)
{
	this->type = newType;
}
