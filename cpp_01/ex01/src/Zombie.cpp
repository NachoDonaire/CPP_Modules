#include <Zombie.h>

Zombie::Zombie()
{
}

void	Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "The zombie: " << name << " has been destroyed" << std::endl;
}

void	Zombie::setname(std::string namecillo)
{
	this->name = namecillo;
}
