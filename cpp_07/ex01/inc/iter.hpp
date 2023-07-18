#include <iostream>

template <typename L, size_t N, typename func>
void	iter( L (&a)[N], int n, func f )
{
	for (int i = 0; i < n ; i++)
	{
		if (!a[i])
			return ;
		f(a[i]);
	}
}

template <typename L>
void	print_array(L (&a), int n)
{
	for (int i = 0; i < n; i++)
		std::cout << a[i];
	std::cout << std::endl;
}	
