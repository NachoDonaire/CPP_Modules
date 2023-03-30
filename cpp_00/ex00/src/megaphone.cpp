#include "megaphone.hpp"

int	main(int arg, char **args)
{
	std::string 	s;
	int		i;

	if (arg <= 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	s = "";
	i = 1;
	while (args[i])
		s += args[i++];
	i = 0;
	while (s[i])
	{
		if (islower(s[i]))
			s[i] = toupper(s[i]);
		std::cout << s[i++];
	}
	std::cout << std::endl;
	return (0);
}
