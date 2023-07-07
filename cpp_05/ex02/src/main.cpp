#include <Bureaucrat.hpp>
#include <Form.hpp>

int	main()
{
	try
	{
		Bureaucrat b("Jossie", 12);
		Bureaucrat a("Wilkinson", 10);
		Bureaucrat c(a);
		Form d("Platano", 0, 13, 14);
		Form e(d);
		std::cout << e.getSign() << std::endl;
		a.signForm(e);
		std::cout << e.getSign() << std::endl;
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
