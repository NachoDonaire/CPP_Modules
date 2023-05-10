#include <FragTrap.hpp>

FragTrap::FragTrap() : ClapTrap()
{
}

FragTrap::FragTrap(std::string namecillo) : ClapTrap()
{
	this->name = namecillo;
	this->hit_points = 100;
	this->energy_points = 100;
	this->attack_dmg = 30;
	std::cout << "FragTrap " << this->name << " has been created" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout<< "FragTrap " << this->name << " has been destroyed" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &f)
{
	if (this != &f)
	{
		return (*this);
	}
	return(*this);
}

void 	highFivesGuys(void)
{
	std::cout << "This is a five guys" << std::endl;
}

