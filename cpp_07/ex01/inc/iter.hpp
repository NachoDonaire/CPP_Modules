#include <iostream>

template <typename L, typename func>
void	iter( L *a , int n, func f )
{
	for (int i = 0; i < n ; i++)
	{
		f(a[i]);
	}
}

template <typename L, size_t N>
void	print_array(L (&a)[N], int n)
{
	for (int i = 0; i < n; i++)
	{
		std::cout << a[i];
	}
	std::cout << std::endl;
}

template <typename T>
void	aPrint(T &a)
{
	std::cout << a << std::endl;
}
