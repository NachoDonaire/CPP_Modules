#include <iostream>

template<typename T>
void	swap(T &a, T &b)
{
	T	swap;

	swap = a;
	a = b;
	b = swap;
}

template<typename L>
L	min(L a, L b)
{
	if (a > b)
		return b;
	return a;
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return a;
	return b;
}
