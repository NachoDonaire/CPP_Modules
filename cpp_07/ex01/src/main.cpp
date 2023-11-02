#include <iter.hpp>

void	plus(int &i)
{
	i++;
}

void	plus_char(char &c)
{
	c++;
}

void	printInt(int a)
{
	std::cout << a << std::endl;
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
	std::cout << "-----------iter applied and printInt function ----------------------" << std::endl;
	::iter(a, 5, plus);
	::iter(a, 5, printInt);
	//::iter(a, 3, &aPrint);
	//::print_array(a, 5);
	return (0);
}
