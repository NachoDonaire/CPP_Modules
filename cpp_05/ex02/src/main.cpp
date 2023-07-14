#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>
#include <ShrubberyCreationForm.hpp>
#include <PresidentialPardonForm.hpp>
#include <AForm.hpp>

int	main()
{
	 try {
        Bureaucrat bureaucrat("ash", 135); // error with 200
        ShrubberyCreationForm form1("Shrubbery");
        RobotomyRequestForm form2("Robotomy");
        PresidentialPardonForm form3("President");

        std::cout << "\n--------------- Form 1 ( Shrubbery ) ---------------" << std::endl;
        bureaucrat.signAForm(form1);
        bureaucrat.executeAForm(form1);
        std::cout << "\n--------------- Form 2 ( Robotomy ) ---------------" << std::endl;
        bureaucrat.signAForm(form2);
        bureaucrat.executeAForm(form2);
        bureaucrat.executeAForm(form2);
        bureaucrat.executeAForm(form2);
        bureaucrat.executeAForm(form2);
        std::cout << "\n--------------- Form 3 ( President ) ---------------" << std::endl;
        bureaucrat.signAForm(form3);
        bureaucrat.executeAForm(form3);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}
