#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include "iostream"
#include "unistd.h"
#include <deque>
#include <vector>



template <typename T>
int	easyfind(T	container, int i)
{
	if (!container.at(i))
		throw "Not found";
	return container.at(i);
}

#endif
