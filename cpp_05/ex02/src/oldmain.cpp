#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <AForm.hpp>

int	main()
{
	try
	{
		//Bureaucrat b("Jossie", 12);
		Bureaucrat a("Wilkinson", 10);
		Bureaucrat c(a);
		Bureaucrat g("Tomi", 4);
		AForm *d = new RobotomyRequestForm("tobias  johnson");
		AForm *e = new ShrubberyCreationForm("tobias_johnson");
		AForm *f = new PresidentialPardonForm("Little Richard");
		a.executeAForm(*e);
		c.executeAForm(*d);
		g.executeAForm(*f);
		delete e;
	}
	catch (const char *s)
	{
		std::cout << s;
	}
	return (0);
}
