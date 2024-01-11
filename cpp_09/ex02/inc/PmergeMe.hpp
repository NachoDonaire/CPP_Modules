#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <list>
#include <cstdlib>
#include <iterator>

class PmergeMe
{
	private:
		std::vector<int>	vecA;
		std::vector<int>	vecB;
		std::list<int>		lstA;
		int					error;
 	public:
    		PmergeMe();
    		PmergeMe(char **args);
    		PmergeMe(const PmergeMe &f);
    		~PmergeMe();
    		PmergeMe& operator=(const PmergeMe &f);
			void	mergeInsertVector();
			void	printVec(std::vector<int> vec);
			int	isVecSorted(std::vector<int> vec);
			int	recursiveSortVec();
			void	merge();
			void	insert();
			std::vector<int>	&getVec();
};

#endif
