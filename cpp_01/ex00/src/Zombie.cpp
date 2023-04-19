#include <Zombie.h>

Zombie::Zombie(std::string namecillo)
{
	name = namecillo;
}

void	Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "The zombie: " << name << " has been destroyed" << std::endl;
}
