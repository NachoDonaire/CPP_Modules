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

int	BitcoinExchange::parseDate(std::string	date)
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
			return 0;
		if (i == 1)
		{
			if (namba > 12 || namba < 0)
				return 0;
		}
		else if (i == 2)
		{
			if (namba > 31 || namba < 0)
				return 0;
		}
		i++;
	}
	if (i != 3)
		return 0;
	return 1;
}

int BitcoinExchange::parseValue(std::string	value)
{
	if (atof(value.c_str()) == 0.0 && value != "0")
		return 0;
	if (atof (value.c_str()) < 0.0 || atof(value.c_str()) > 1000.0)
	{
		return 0;
	}
	return 1;
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
				date = word;
				//date = this->parseDate(word);
			else if (type == 1)
				value = word;
				//value = this->parseValue(word);
			type++;
		}/*
		if (date  == "nan")// || value == "nan")
			this->storedData.insert(std::pair<std::string, std::string>(date, 0.0));
			
		else if (value == "nan")
			this->storedData.insert(std::pair<std::string, std::string>(value, 0.0));
		else*/
		this->storedData.insert(std::pair<std::string, std::string>(date, value));
		type = 0;
	}
	return (0);
}

void	BitcoinExchange::printData()
{
	int	offvalue;
	std::string	nan = "nan";

	offvalue = 0;
	(void)offvalue;
	for (std::map<std::string, std::string>::iterator i = this->storedData.begin(); i != storedData.end(); i++)
	{
		//std::cout << i->first << " --- " << i->second <<" ee"<< this->storedData.size() << std::endl;
		if (this->parseValue(i->second) == 0 || this->parseDate(i->first) == 0)
			std::cout << "Not valid input" << std::endl;
		else
		{
			offvalue = RATIO * atof(i->second.c_str());
			std::cout << i->first << " => " << i->second << " = " << offvalue << std::endl;
		}
		/*if (i->first == nan) 
		{
			std::cout << "a" << storedData.size() << std::endl;
			std::cout << "Not valid input" << std::endl;
		}*/
		/*
		else
		{
			offvalue = RATIO * i->second;
			std::cout << i->first << " => " << i->second << " = " << offvalue << std::endl;
		}*/
	}
}
