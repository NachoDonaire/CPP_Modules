#include <Bureaucrat.hpp>
#include <AForm.hpp>

int	main()
{
	try
	{
		Bureaucrat b("Jossie", 12);
		Bureaucrat a("Wilkinson", 15);
		Bureaucrat c(a);
		AForm d("Platano", 1, 13, 14);
		AForm e(d);
		std::cout << d << std::endl << e << std::endl;
		std::cout << c << std::endl;
		b.upGrade(3);
		std::cout << b << std::endl;
		b.downGrade(3);
		std::cout << b << std::endl;
		std::cout << c << std::endl;
	}
	catch (const char *s)
	{
		std::cout << s;
	}
	return (0);
}
