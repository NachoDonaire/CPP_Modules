#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <unistd.h>
#define	RATIO	0.3


class BitcoinExchange
{
	private:
		std::string			fileName;
		std::map<std::string, std::string>	storedData;
 	public:
    		BitcoinExchange();
    		BitcoinExchange(std::string file);
    		BitcoinExchange(const BitcoinExchange &f);
    		~BitcoinExchange();
    		BitcoinExchange& operator=(const BitcoinExchange &f);
			int	errorManagement(int key);
			int	parseFile();
			std::string getFileName();
		int	parseDate(std::string date);
		int	parseValue(std::string value);
		void		printData();
};

#endif
