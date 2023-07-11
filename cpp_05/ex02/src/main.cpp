#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <AForm.hpp>

int	main()
{
	try
	{
		//Bureaucrat b("Jossie", 12);
		Bureaucrat a("Wilkinson", 10);
		Bureaucrat c(a);
		AForm *d = new RobotomyRequestForm("tobias  johnson");
		AForm *e = new ShrubberyCreationForm("tobias  johnson");
		a.executeAForm(*e);
		a.executeAForm(*d);
		delete e;
	}
	catch (const char *s)
	{
		std::cout << s;
	}
	return (0);
}
