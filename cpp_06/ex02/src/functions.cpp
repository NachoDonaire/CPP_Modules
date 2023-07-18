#include <A.hpp>
#include <B.hpp>
#include <C.hpp>
#include <random>

Base	* generate(void)
{
	std::random_device 	rd;
	std::mt19937		gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);
	Base				*r;

	int	tucson = dis(gen);
	std::cout << "tucson : " << tucson << std::endl;
	if (tucson % 3 == 0)
		r = new A;
	else if (tucson % 3 == 1)
		r = new B;
	else
		r = new C;
	return (r);
}

void	identify(Base *p)
{
	std::cout << "type : ";
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "a" << std::endl;
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "b" << std::endl;
	else if (dynamic_cast<C*>(p) != nullptr)
		std::cout << "c" << std::endl;
}

void	identify_ref(Base &p)
{
	std::cout << "Type : ";
	try{
		A& a = dynamic_cast<A&>(p);
			(void)a;
		std::cout << "A" << std::endl;
	}
	catch (std::bad_cast&)
	{
		try{
			B &b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B" << std::endl;
		}
		catch (std::bad_cast&)
		{
			try{
				C &c = dynamic_cast<C&>(p);
			(void)c;
				std::cout << "C" << std::endl;
			}
			catch (std::bad_cast&)
			{
				std::cout << "None" << std::endl;
			}
		}
	}
}
