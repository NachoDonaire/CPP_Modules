#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>

class PmergeMe
{
	private:
		std::vector<int>	vecA;
		std::list<int>		lstA;
		int					error;
 	public:
    		PmergeMe();
    		PmergeMe(char **args);
    		PmergeMe(const PmergeMe &f);
    		~PmergeMe();
    		PmergeMe& operator=(const PmergeMe &f);
			void	mergeInsertVector();
			void	printVec();
			int	isVecSorted();
};

#endif
