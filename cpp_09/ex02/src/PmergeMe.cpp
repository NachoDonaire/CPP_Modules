#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
}


PmergeMe::PmergeMe(char **args)
{
	int	i = 0;

	this->error = 0;
	while (args[i])
	{
		std::string	num(args[i]);
		int	y = 0;
		while (num[y])
		{
			if (!isdigit(num[y]))
				this->error = 1;
			y++;
		}
		if (this->error != 0)
			{
				vecA.push_back(atoi(num.c_str()));
				lstA.push_back(atoi(num.c_str()));
			}
		i++;
	}
}

PmergeMe::PmergeMe(const PmergeMe &f)
{
			this->vecA = f.vecA;
			this->lstA = f.lstA;
}

PmergeMe::~PmergeMe()
{

}

PmergeMe &PmergeMe::operator=(const PmergeMe &f)
{
        if (this != &f)
        {
			this->vecA = f.vecA;
			this->lstA = f.lstA;
        }
        return *this;
}

int	PmergeMe::isVecSorted()
{
	std::vector<int>::iterator beg = this->vecA.begin();

	int	y = *beg;

	for (std::vector<int>::iterator i = this->vecA.begin()++; i != this->vecA.end(); i++)
	{
		//std::cout << "y : " << y << "i : " << *i << std::endl;
		if (y < *i)
			y = *i;
		else
			return (0);
	}
	return (1);
}


void	PmergeMe::printVec()
{
	std::cout << "VECTOR" << std::endl;
	for (std::vector<int>::iterator i = this->vecA.begin(); i != this->vecA.end(); i++)
		std::cout << *i << std::endl;
}

void	PmergeMe::mergeInsertVector()
{
	std::vector<int>	aux;	
	(void)aux;

	//std::vector<int>::iterator beg = this->vecA.begin();
	//std::vector<int>::iterator end = this->vecA.end();
	std::cout << "is sorted" << this->isVecSorted();
}
