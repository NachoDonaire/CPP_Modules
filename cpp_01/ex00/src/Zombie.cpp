#include <Zombie.h>

Zombie::Zombie(std::string namecillo)
{
	name = namecillo;
}

void	Zombie::announce()
{
	std::cout << name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

~Zombie::Zombie()
{

