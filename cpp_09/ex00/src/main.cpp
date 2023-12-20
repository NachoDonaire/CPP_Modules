#include <BitcoinExchange.hpp>

int	main(int arg, char **args)
{
	if (arg != 2)
	{
		std::cout << "File not found" << std::endl;
		return 0;
	}
	std::string file(args[1]);
	BitcoinExchange	be(file);
	std::cout << be.getFileName() << std::endl;
	be.printData();
	return (0);
}
