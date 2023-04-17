#include <Zombie.h>

int	main(int arg, char **args)
{
	Zombie	*z;
	if (!arg && !args)
		return (0);

	z = newZombie("renton");
	z->announce();
	randomChump("mark");
	return (0);
}
