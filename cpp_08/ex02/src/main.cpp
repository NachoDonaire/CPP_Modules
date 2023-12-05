#include <MutantStack.hpp>

int	main()
{
	{
		MutantStack<int, std::list<int> > mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int, std::list<int> >::iterator it = mstack.begin();
MutantStack<int, std::list<int> >::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
MutantStack<int, std::list<int> > s(mstack);
}
std::cout << "------------------------------------------" << std::endl;
	{
		MutantStack<int> mstack;
		std::vector<int> v;
mstack.push(5);
mstack.push(17);
v.push_back(17);
v.push_back(17);

std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it ;
it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
it++;
}
//MutantStack<int> s(mstack);
}

std::cout << "-------------------------------------------------------"<< std::endl;

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
	for (MutantStack<int>::iterator i = a.begin(); i != a.end(); ++i)
	{
		if (i == a.begin())
			std::cout << "Tukaaaa" ;
		std::cout << *i << "neoTomasa" <<std::endl;
	}
	MutantStack<int>::iterator i = a.begin();
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
}
	return (0);
}
