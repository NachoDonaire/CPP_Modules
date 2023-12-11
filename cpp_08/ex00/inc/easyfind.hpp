#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "iostream"
#include "unistd.h"
#include <deque>
#include <vector>
#include <algorithm>



template <typename T>
int	easyfind(T	container, int i)
{
	typename T::iterator	r = std::find(container.begin(), container.end(), container.at(i - 1));
	if (r == container.end())
		throw std::runtime_error("Not found");
	return *r;
}

#endif
