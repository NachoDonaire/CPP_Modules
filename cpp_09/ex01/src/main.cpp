#include <RPN.hpp>

int	main(int arg, char **args)
{
	if (arg == 1)
	{
		std::cout << "Not args provided" << std::endl;
		return 0;
	}

	RPN	rpn(args);

	rpn.printStak();
	return (0);
}
