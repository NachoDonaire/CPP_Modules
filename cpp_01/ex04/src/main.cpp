#include "main.hpp"

int	main(int arg, char **args)
{
	if (arg != 4)
	{
		std::cout << "Invalid parameters" << std::endl;
		return (0);
	}

	std::string 	buffer = bufferio(args[1]);
	if (buffer == "")
		return (0);
	replace_file(buffer, args[1], args[2], args[3]);
	return (0);
}
