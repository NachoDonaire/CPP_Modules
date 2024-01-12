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
		std::list<int>		lstB;
		int					error;
 	public:
    		PmergeMe();
    		PmergeMe(char **args);
    		PmergeMe(const PmergeMe &f);
    		~PmergeMe();
    		PmergeMe& operator=(const PmergeMe &f);
			void	mergeInsert();
			void	printVec(std::vector<int> vec);
			void	printList(std::list<int> vec);
			int	isVecSorted(std::vector<int> vec);
			int	isListSorted(std::list<int> vec);
			int	recursiveSortVec();
			int	recursiveSortLst();
			void	merge();
			void	mergeList();
			void	insertie();
			void	insertList();
			std::vector<int>	&getVec();
			std::list<int>	&getList();
			void	adjustI(int mid, std::list<int>::iterator &lst);
};

#endif
