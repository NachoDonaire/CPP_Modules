#include <Zombie.h>

Zombie	*newZombie(std::string name)
{
	Zombie	*z;
	z = new Zombie(name);

	return (z);
}
