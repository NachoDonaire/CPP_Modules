#include "main.hpp"

int	main(int arg, char **args)
{
	if (arg != 2)
	{
		std::cout << "Invalid parameters" << std::endl;
		return (0);
	}
	Harl	h;
	h.complain(args[1]);
	return (0);
}
