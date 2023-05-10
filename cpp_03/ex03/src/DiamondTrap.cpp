#include <DiamondTrap.hpp>

DiamondTrap::DiamondTrap() : ClapTrap(), ScavTrap(), FragTrap() {

	std::cout << "DiamondTrap default constructor called" << std::endl;
}


DiamondTrap::~DiamondTrap() {

	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string namecillo) : ClapTrap(namecillo), ScavTrap(namecillo), FragTrap(namecillo)
{
	this->name = namecillo;
	this->ClapTrap::name = namecillo + "_clap_name";
	this->hit_points = this->FragTrap::hit_points;
	this->energy_points = this->ScavTrap::energy_points;
	this->attack_dmg = this->FragTrap::attack_dmg;

	std::cout << "DiamondTrap " << this->name << " has been created" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &d)
{
	if (this != &d)
	{
		return *this;
	}
	return *this;
}

void 	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << "ClapTrap name: " << ClapTrap::name << std::endl;
}
