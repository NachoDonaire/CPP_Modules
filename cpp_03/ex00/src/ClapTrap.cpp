#include <ClapTrap.hpp>

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;
	this->name = "";
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 10;
}
	

ClapTrap::ClapTrap(std::string namecillo)
{
	std::cout << "Constructor called" << std::endl;
	this->name = namecillo;
	this->hit_points = 10;
	this->energy_points = 10;
	this->attack_dmg = 10;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& c)
{
	this->name = c.name;
	this->hit_points = c.hit_points;
	this->energy_points = c.energy_points;
	this->attack_dmg = c.attack_dmg;
}

ClapTrap ClapTrap::operator=(const ClapTrap c)
{
	if (this != &c)
	{
		this->name = c.name;
		this->hit_points = c.hit_points;
		this->energy_points = c.energy_points;
		this->attack_dmg = c.attack_dmg;
	}
	return (*this);
}

void	ClapTrap::attack(const std::string &target)
{
	if (energy_points <= 0)
	{
		std::cout << "Not enough energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_dmg << " points of damage!" << std::endl;

	this->energy_points -= 1;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (amount >=static_cast<unsigned int>(this->hit_points))
	{
		std::cout << "ClapTrap " << this->name << " received " << amount << " points of damage causing his dead!" << std::endl;
		this->hit_points = 0;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	this->hit_points -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energy_points <= 0)
	{
		std::cout << "Not enough energy points" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->name << " repaired " << amount << " hit points" << std::endl;
	this->hit_points += amount;
	this->energy_points -= 1;
}


