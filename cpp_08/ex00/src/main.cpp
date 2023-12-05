#include <easyfind.hpp>

int	main()
{
	std::vector<int> v;

	v.push_back(0);
	v.push_back(12);
	v.push_back(52);
	v.push_back(323);
	v.push_back(67);

	std::cout << easyfind(v, 3) << std::endl;
	std::deque<int> a;

	a.push_back(0);
	a.push_back(12);
	a.push_back(52);
	a.push_back(323);
	a.push_back(67);

	std::cout << easyfind(a, 3) << std::endl;

	return (0);

}
