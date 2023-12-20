#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>



class BitcoinExchange
{
	private:
		std::string			fileName;
		std::map<std::string, float>	storedData;
 	public:
    		BitcoinExchange();
    		BitcoinExchange(std::string file);
    		BitcoinExchange(const BitcoinExchange &f);
    		~BitcoinExchange();
    		BitcoinExchange& operator=(const BitcoinExchange &f);
			int	errorManagement(int key);
			int	parseFile();
			std::string getFileName();
		std::string	parseDate(std::string date);
		std::string	parseValue(std::string value);
		void		printData();
};

#endif
