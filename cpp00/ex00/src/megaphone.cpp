#include "megaphone.hpp"

int	main(int arg, char **args)
{
	int		i;
	int		y;
	char	c;

	i = 1;
	y = 0;
	if (arg <= 1)
		std::cout << "* LOUD AND UNBERABLE FEEDBACK NOISE *";
	while (args[i])
	{
		while (args[i][y])
		{
			if (args[i][y] >= 'a' && args[i][y] <= 'z')
			{
				c = args[i][y] - 32;
				std::cout << c;
			}
			else
				std::cout << args[i][y];
			y++;
		}
		if (i < arg - 1)
			std::cout << " ";
		i++;
		y = 0;
	}
	return (0);
}
