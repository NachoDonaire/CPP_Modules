#include <easyfind.hpp>

int	main()
{
	std::cout << "---------VECTOR---------" << std::endl;
	std::vector<int> a;
	a.push_back(3);
	a.push_back(9);
	a.push_back(1);
	a.push_back(4);
	a.push_back(7);
	//int	i = 0;
	std::cout << "easyfind(a, 1): " << ::easyfind(a, 1) << std::endl;
	std::cout << "easyfind(a, 3): " << ::easyfind(a, 3) << std::endl;
	std::cout << "easyfind(a, 2): " << ::easyfind(a, 2) << std::endl;


	std::cout << "---------DEQUE---------" << std::endl;
	std::deque<int> b;
	b.push_back(2);
	b.push_back(9);
	b.push_back(3);
	b.push_back(4);
	b.push_back(7);
	b.push_back(-7);
	//int	i = 0;
	std::cout << "easyfind(b, 3): " <<  ::easyfind(b, 3) << std::endl;
	std::cout << "easyfind(b, 9): " << easyfind(b, 9) << std::endl;
	std::cout << "easyfind(b, 17): " << easyfind(b, 17) << std::endl;
	std::cout << "easyfind(b, -7): " << easyfind(b, -7) << std::endl;

	std::cout << "---------LIST---------" << std::endl;
	std::list<int> c;
	c.push_back(3);
	c.push_back(9);
	c.push_back(1);
	c.push_back(4);
	c.push_back(7);
	//int	i = 0;
	std::cout << "easyfind(c, 3): " << ::easyfind(b, 3) << std::endl;
	std::cout << "easyfind(c, 9): " << easyfind(b, 9) << std::endl;
	std::cout << "[BAD RANGE]easyfind(c, 9): " << easyfind(b, 9) << std::endl;
	return (0);
}
