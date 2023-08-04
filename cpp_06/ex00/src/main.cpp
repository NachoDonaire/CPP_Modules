#include <ScalarConverter.hpp>

int	main(int arg, char **args)
{
	ScalarConverter	s;
	std::string	str;
	if (arg != 2)
	{
		std::cout << "Please, introduce an argument to convert, just one" << std::endl;
		return (0);
	}
	str = args[1];
	ScalarConverter::convert(str);
	//std::cout << s << std::endl;
	return (0);
}
