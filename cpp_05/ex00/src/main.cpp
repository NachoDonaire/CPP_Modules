#include <Bureaucrat.hpp>

int	main()
{
	try
	{
		Bureaucrat b("Jossie", 89);
		Bureaucrat a("Wilkinson", 15);
		Bureaucrat c(a);
		std::cout << c << std::endl;
		b.upGrade(3);
		std::cout << b << std::endl;
		b.downGrade(3);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (std::exception &c)
	{
		std::cout << c.what();
	}
	return (0);
}
