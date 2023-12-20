#include <BitcoinExchange.hpp>

BitcoinExchange::BitcoinExchange()
{
	this->fileName ="";
}

BitcoinExchange::BitcoinExchange(std::string file)
{
	this->fileName = file;
	this->parseFile();
	//this->csvFile(fileName, std::fstream::in);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &a)
{
	this->fileName = a.fileName;
	//this->csvFile = a.csvFile;
}

BitcoinExchange::~BitcoinExchange()
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &f)
{
        if (this != &f)
        {
		//	this->csvFile.close();
			this->fileName = f.fileName;
		///	this->csvFile(this->fileName, std::fstream::in);
        }
        return *this;
}

int	BitcoinExchange::errorManagement(int key)
{
	if (key == 0)
		std::cout << "Not enough arguments" << std::endl;
	return (0);
}

std::string BitcoinExchange::getFileName()
{
	return this->fileName;
}

std::string BitcoinExchange::parseDate(std::string	date)
{
	std::string		n;
	std::istringstream	stream(date);
	std::string		Date;
	int			i;

	i = 0;
	while (std::getline(stream, Date, '-'))
	{
		int	namba = atoi(Date.c_str());
		if (atoi(Date.c_str()) == 0)
			return "nan";
		if (i == 1)
		{
			if (namba > 12 || namba < 0)
				return "nan";
		}
		else if (i == 2)
		{
			if (namba > 31 || namba < 0)
				return "nan";
		}
		i++;
	}
	if (i != 3)
		return "nan";
	return date;
}

std::string BitcoinExchange::parseValue(std::string	value)
{
	if (atof(value.c_str()) == 0.0 && value != "0")
		return "nan";
	if (atof (value.c_str()) < 0.0 || atof(value.c_str()) > 1000)
		return "nan";
	return value;
}

int	BitcoinExchange::parseFile()
{
	std::ifstream	csv(this->getFileName().c_str());
	std::vector<std::string>	content;
	std::string			line;
	int				type;

	type = 0;
	while (std::getline(csv, line))
	{
		std::istringstream	stream(line);
		std::string		word;
		std::string		date;
		std::string		value;

		while (std::getline(stream, word, '|'))
		{
			if (type == 0)
			{
				//std::cout << date << std::endl;
				date = this->parseDate(word);
			}
			else if (type == 1)
				value = this->parseValue(word);
			if (date  == "nan" || value == "nan")
			{
				std::cout << "Wrong file format" << std::endl;
				return (1);
			}
			type++;
		}
		this->storedData.insert(std::pair<std::string, float>(date, atof(value.c_str())));
		type = 0;
	}
	return (0);
}

void	BitcoinExchange::printData()
{
	for (std::map<std::string, float>::iterator i = this->storedData.begin(); i != storedData.end(); i++)
		std::cout << "Date: " << i->first << " -- Value: " << i->second << std::endl;
}
