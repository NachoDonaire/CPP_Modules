#include <iter.hpp>

void	plus(int &i)
{
	i++;
}

void	plus_char(char &c)
{
	c++;
}


int	main()
{
	int	a[5] = { 1, 2, 3, 4, 5 };
	char	c[3] = { 'a', 'b', 'c' };

	::print_array(a, 5);
	::print_array(c, 3);
	::iter(a, 5, plus);
	::iter(c, 3, plus_char);
	std::cout << "----------- iter applied ------------------" << std::endl;
	::print_array(a, 5);
	::print_array(c, 3);
	std::cout << "----------- more than array lenght ----------------------" << std::endl;
	::iter(a, 9, plus);
	::print_array(a, 5);
	return (0);
}
