#include "main.hpp"

int	main(int arg, char **args)
{
	//std::string		line;

	if (arg != 4)
	{
		std::cout << "Invalid parameters" << std::endl;
		return (0);
	}

	std::ifstream	archivo(args[1]);
	std::string 	buffer = bufferio(archivo);
	/*if (file.is_open())
	{
		while (std::getline(file, line))
		{
			if (file.eof())
				buffer += line;
			else
				buffer += line + "\n";
		}
		file.close();
	}*/
	std::cout << buffer << std::endl;
	return (0);
}
