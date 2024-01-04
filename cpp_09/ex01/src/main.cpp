#include <RPN.hpp>

int main(int arg, char **args)
{
	if (arg <= 1)
	{
		std::cout << "No args provided" << std::endl;
		return 0;
	}
	else if (arg > 2)
	{
		std::cout << "Too much arguments, please write expression in just one arg" << std::endl;
		return 0;
	}
	RPN	rpn(args);
	rpn.result();
}
