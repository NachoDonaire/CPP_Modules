#include <ScavTrap.hpp>

ScavTrap::ScavTrap() : ClapTrap() {
};

ScavTrap::ScavTrap(std::string namecillo) : ClapTrap(namecillo) {
	this->name = namecillo;
	this->hit_points = 100;
	this->energy_points = 50;
	this->attack_dmg = 20;
	std::cout << "ScavTrap " << this->name << " has been created" << std::endl;
};
ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap " << this->name << " has been destroyed" << std::endl;
};

ScavTrap &ScavTrap::operator = (const ScavTrap &s)
{
	if (this != &s)
		return (*this);
	return (*this);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (energy_points <= 0)
        {
                std::cout << "Not enough energy points" << std::endl;
                return ;
        }
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage!" << std::endl;

        this->energy_points -= 1;
}
