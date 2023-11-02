#ifndef EASYFIND_HPP
#define EASYFIND_HPP


#include <algorithm>
#include <iostream>
#include <vector>
#include <deque>
#include <list>

template <typename T>
//int easyfind(const T &t, int n);
int	easyfind(const T &t, int n)
{
	int i = 0;
	try{
		if (std::find( t.begin(), t.end(), n) != t.end())
		{
			return *(std::find( t.begin(), t.end(), n));
		}
		else
			throw "Not found";

		return i;
	}
	catch(const char *s)
	{
		std::string aa = s;
		std::cout << aa;
		return (0);
	}

}
#endif
