#include "main.hpp"

std::string	bufferio(std::ifstream &file)
{
	std::string 	buffer;
	std::string		line;

	if (file.is_open())
	{
		while (std::getline(file, line))
		{
			if (file.eof())
				buffer += line;
			else
				buffer += line + "\n";
		}
		file.close();
	}
	return (buffer);
}
