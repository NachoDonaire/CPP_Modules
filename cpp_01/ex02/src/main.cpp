#include "main.hpp"

int	main()
{
	std::string	s;

	s = "HI THIS IS BRAIN";
	std::string	*stringPTR = &s;
	std::string	&stringREF = s;

	std::cout << &s << " : " << s << std::endl;
	std::cout << stringPTR << " : " << *stringPTR << std::endl;
	std::cout << &stringREF << " : " << stringREF << std::endl;
	return (0);
}
