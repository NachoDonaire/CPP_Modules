#include <MutantStack.hpp>

int	main()
{
	MutantStack<int>			a;
	MutantStack<std::string>	b;
	std::vector<int>					s;
	//std::stack<std::string>	b;
	//MutantStack<int>			b;

	s.push_back(1);
	s.push_back(52);
	a.push(23);
	a.push(57);
	a.push(89);

	for (std::vector<int>::iterator i = s.begin(); i != s.end(); i++)
		std::cout << *i << std::endl;
	MutantStack<int>::iterator i = a.end();
	std::cout << "aquiiii" << std::endl;
	std::cout << *i << std::endl;
	b.push("derrrr");
	//b.push("holii :)");
	std::cout << "is a empty? " << a.empty() << std::endl;
	std::cout << "is b empty? " << b.empty() << std::endl;

	std::cout << " a size: " << a.size() << std::endl;
	std::cout << " b size: " << b.size() << std::endl;

	std::cout << "after all, a top : " << a.top() << std::endl;
	std::cout << "after all, b top : " << b.top() << std::endl;
	return (0);
}
