#include "megaphone.hpp"

int	main(int arg, char **args)
{
	std::string 	s;
	int		y;
	int		i;
	std::string		swapped;
	if (arg <= 1)
	{
		std::cout << "At least one argument is required";
		return (0);
	}
	s = "";
	i = 1;
	while (args[i])
		s += args[i++];
	i = 0;
	y = s.length();
	while (s[i])
	{
		if (isupper(s[i]))
				s[i] = tolower(s[i]);
		else if (islower(s[i]))
			s[i] = toupper(s[i]);
		swapped[y--] = s[i++];
	}
	std::cout << s;
	return (0);
}
