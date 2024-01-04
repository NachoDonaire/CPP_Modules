#include <PmergeMe.hpp>

int	main(int arg, char **args)
{
	if (arg <= 1)
	{
		std::cout << "No args were provided" << std::endl;
		return (0);
	}

	PmergeMe	me(args);
	std::cout << "SORT : " << me.isVecSorted() << std::endl;
	me.printVec();
	return (0);
}
