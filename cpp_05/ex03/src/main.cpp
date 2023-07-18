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
		//AForm	*presidential2;

		robotomy = a.makeForm("robotomy request", "tucson");
		shrubbery = a.makeForm("shrubbery creation", "tobias");
		presidential = a.makeForm("presidential pardon", "johnson");
		//presidential2 = a.makeForm("caca", "johnson");
		
		std::cout << "---------SIGN---------" << std::endl;
		joe.signAForm(*robotomy);
		joe.signAForm(*shrubbery);
		joe.signAForm(*presidential);
		std::cout << "---------ROBOTOMY---------" << std::endl;
		joe.executeAForm(*robotomy);
		std::cout << "---------SHRUBBERY---------" << std::endl;
		joe.executeAForm(*shrubbery);
		std::cout << "---------PRESIDENTIAL---------" << std::endl;
		joe.executeAForm(*presidential);
		//Bureaucrat b("Jossie", 12);
	}
	catch (std::exception &e)
	{
		std::cout << e.what();
	}
	return (0);
}
