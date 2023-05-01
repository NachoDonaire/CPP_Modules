#include "main.hpp"

std::string	bufferio(std::string file_name)
{
	std::string 	buffer;
	std::string	line;
	std::ifstream	file(file_name.c_str());

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
	else
	{
		std::cout << "Not valid file" << std::endl;
		return ("");
	}
	return (buffer);
}

void	replace_file(std::string buffer, std::string arg, std::string find, std::string subs)
{
	std::string	neo_name;
	size_t		pos;
	std::string	neo_buff;
	std::string	aux1;
	std::string	aux2;

	pos = 0;
	neo_name = arg + ".replace";
	std::ofstream	neo_file(neo_name.c_str(), std::ofstream::out | std::ofstream::trunc);
	(void)buffer;
	if (neo_file.is_open())
	{	
		neo_buff = buffer;
		pos = neo_buff.find(find);
		while (pos != std::string::npos)
		{
			aux1 = neo_buff.substr(0, pos);
			aux2 = neo_buff.substr(pos + find.length());
			neo_buff = aux1 + subs + aux2;
			pos = neo_buff.find(find);
		}
		neo_file << neo_buff;
		neo_file.close();
	}
	else
	{
		std::cout << "Something went wrong" << std::endl;
	}
}

