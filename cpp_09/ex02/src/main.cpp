#include <PmergeMe.hpp>

int	main(int arg, char **args)
{
	if (arg <= 1)
	{
		std::cout << "No args were provided" << std::endl;
		return (0);
	}

	PmergeMe	me(args);
	//std::cout << "SORT : " << me.isVecSorted(me.getVec()) << std::endl;
	//me.recursiveSortVec(me.getVec());
	//me.merge();
	me.mergeInsert();
	//if (me.isVecSorted(me.getVec()))
	//	std::cout << "YEESS!!" << std::endl;
	me.printList(me.getList());
	me.printVec(me.getVec());

	return (0);

	return (0);
}
