#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <AForm.hpp>
#include <Intern.hpp>

int	main()
{
	try
	{
		Intern a;
		Bureaucrat joe("Joe", 2);
		AForm	*robotomy;
		AForm	*shrubbery;
		AForm	*presidential;

		robotomy = a.makeForm("robotomy request", "tucson");
		shrubbery = a.makeForm("shrubbery creation", "tobias");
		presidential = a.makeForm("presidential pardon", "johnson");
		
		joe.executeAForm(*robotomy);
		joe.executeAForm(*shrubbery);
		joe.executeAForm(*presidential);
		//Bureaucrat b("Jossie", 12);
	}
	catch (const char *s)
	{
		std::cout << s;
	}
	return (0);
}
