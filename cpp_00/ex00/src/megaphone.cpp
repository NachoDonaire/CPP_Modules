#include "megaphone.hpp"

int	main(int arg, char **args)
{
	std::string 	s;
	int		i;
	if (arg <= 1)
	{
		std::cout << "At least one argument is required";
		return (0);
	}
	s = "";
	i = 1;
	while (args[i])
		s += args[i++];
	i = s.length() - 1;
	while (i >= 0)
	{
		if (isupper(s[i]))
				s[i] = tolower(s[i]);
		else if (islower(s[i]))
			s[i] = toupper(s[i]);
		std::cout << s[i];
		i--;
	}
	std::cout << "\n";
	return (0);
}
