#include <Zombie.h>

int	main(int arg, char **args)
{
	Zombie	*z;
	if (!arg && !args)
		return (0);

	z = zombieHorde(3, "galois");
	for (int i = 0; i < 3; i++)
		z->announce();
	delete [] z;
	return (0);
}
