#include <PmergeMe.hpp>

PmergeMe::PmergeMe()
{
}


PmergeMe::PmergeMe(char **args)
{
	int	i = 1;

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
		if (this->error == 0)
			{
				vecA.push_back(atoi(num.c_str()));
				lstA.push_back(atoi(num.c_str()));
			}
		i++;
	}
	printList(lstA);
	//this->recursiveSortVec(this->vecA);
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

int	PmergeMe::isVecSorted(std::vector<int> vec)
{
	if (vec.size() == 1)
		return 1;
	std::vector<int>::iterator beg = vec.begin();
	std::vector<int>::iterator i = vec.begin() + 1;

	int	y = *beg;

	while (i != vec.end())
	{
		if (y < *i)
			y = *i;
		else
			return (0);
		i++;
	}
	return (1);
}

int	PmergeMe::isListSorted(std::list<int> vec)
{
	if (vec.size() == 1)
		return 1;
	std::list<int>::iterator beg = vec.begin();
	std::list<int>::iterator i = vec.begin(); i++;

	int	y = *beg;

	while (i != vec.end())
	{
		if (y < *i)
			y = *i;
		else
			return (0);
		i++;
	}
	return (1);
}

void	PmergeMe::printVec(std::vector<int> vec)
{
	std::cout << "VECTOR" << std::endl;
	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << std::endl;
}

void	PmergeMe::printList(std::list<int> vec)
{
	std::cout << "LIST" << std::endl;
	for (std::list<int>::iterator i = vec.begin(); i != vec.end(); i++)
		std::cout << *i << std::endl;
}

std::vector<int>	&PmergeMe::getVec()
{
	return this->vecA;
}

std::list<int>	&PmergeMe::getList()
{
	return this->lstA;
}

int	PmergeMe::recursiveSortVec()
{
	std::vector<int> sorted;


	while (!vecB.empty())
	{
		std::vector<int>::iterator i = vecB.begin();
		std::vector<int>::iterator y = i;
		while (i != vecB.end())
		{
			if (*y > *i)
				y = i;

			i++;
		}
		sorted.push_back(*y);
		vecB.erase(y);
		
	}
	vecB = sorted;
	//this->printVec(vecB);

	return 0;

}

void	PmergeMe::merge()
{
	size_t	z = 0;
	size_t	size = vecA.size();


	if (vecA.size() % 2 == 1)
	{
		vecB.insert(vecB.begin(), *(vecA.begin()));
		vecA.erase(vecA.begin());
	}
	std::vector<int>::iterator	i = vecA.begin();
	std::vector<int>::iterator	y = vecA.begin() + 1;
	//std::cout << "tucsoni : " << *i << "tuckery : " << *y << std::endl;
	while (vecA.size() > size / 2)
	{
	//std::cout << "tucsoni : " << *i << "tuckery : " << *y << std::endl;
		if (*i < *y)
		{
			vecB.push_back(*y);
			vecA.erase(y);
		}
		else
		{
			vecB.push_back(*i);
			vecA.erase(i);
		}
		i++;
		y = i + 1;
		z++;
	}
	this->recursiveSortVec();
	//std::cout << "SIZE B: " << vecB.size() << std::endl;
	//this->printVec(vecB);
	//std::cout << "SIZE A: " << vecA.size() << std::endl;
	//this->printVec(vecA);
}


void	PmergeMe::insert()	
{
	printVec(vecB);
	//printVec(vecA);
	while (!vecA.empty())
	{
		int	right;
		/*
		if (vecB.size() % 2 == 1)
			right = (vecB.size());
		else
			*/
			right = (vecB.size());

		int	left = 0;
		std::vector<int>::iterator	i = this->vecA.begin();

		int	mid ;
			//std::cout << "a -- >"<< left << "b --> " << right << std::endl;
			//std::cout << "ee " << mid << std::endl;
			mid = left + (right - left) / 2;
		while (left < right)
		{
		//	std::cout << "a -- >"<< left << "b --> " << right << std::endl;
		//	std::cout << "ee " << mid << std::endl;
			mid = left + (right - left) / 2;
			if (vecB[mid] < *i)
				left = mid + 1;
			else if (vecB[mid] >= *i)
				right = mid;

		}
		//std::cout << "weeEE --- " << *i << "waaaAA -- " << mid << std::endl;
		std::vector<int>::iterator	y;
		//if (size_t(mid + 1) == vecB.size() || mid == 0)
			y = vecB.begin() + left;
		//else
		//	y = vecB.begin() + mid + 1;
		vecB.insert(y, *i);
		vecA.erase(i);
		//this->printVec(vecB);
	}
	vecA = vecB;
}


void	PmergeMe::insertList()	
{
	printVec(lstB);
	//printVec(lstA);
	while (!lstA.empty())
	{
		int	right;
		/*
		if (lstB.size() % 2 == 1)
			right = (lstB.size());
		else
			*/
			right = (lstB.size());

		int	left = 0;
		std::list<int>::iterator	i = this->lstA.begin();

		int	mid ;
			//std::cout << "a -- >"<< left << "b --> " << right << std::endl;
			//std::cout << "ee " << mid << std::endl;
			mid = left + (right - left) / 2;
		while (left < right)
		{
		//	std::cout << "a -- >"<< left << "b --> " << right << std::endl;
		//	std::cout << "ee " << mid << std::endl;
			mid = left + (right - left) / 2;
			if (lstB[mid] < *i)
				left = mid + 1;
			else if (lstB[mid] >= *i)
				right = mid;

		}
		//std::cout << "weeEE --- " << *i << "waaaAA -- " << mid << std::endl;
		std::list<int>::iterator	y;
		//if (size_t(mid + 1) == lstB.size() || mid == 0)
			y = lstB.begin() + left;
		//else
		//	y = lstB.begin() + mid + 1;
		lstB.insert(y, *i);
		lstA.erase(i);
		//this->printVec(lstB);
	}
	lstA = lstB;
}


			








void	PmergeMe::mergeInsert()
{
	std::vector<int>	aux;	
	(void)aux;
	//this->merge(aux);
	//this->insert(aux);
	//this->merge();

}
