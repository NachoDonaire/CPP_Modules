#include <Intern.hpp>

Intern::Intern()
{
}

Intern::Intern(const Intern &a)
{
	(void)a;
}

Intern::~Intern()
{
}

Intern &Intern::operator=(const Intern &f)
{
        if (this != &f)
        {
        	return *this;
        }
        return *this;
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	int	i = 0;
	int	y = -1;

	AForm *a = new RobotomyRequestForm(target);
	AForm *b = new ShrubberyCreationForm(target);
	AForm *c = new PresidentialPardonForm(target);
	std::string	formies[3] = { "robotomy request", "shrubbery creation", "presidential pardon" };
	AForm		*cor[] = { a, b, c };
	while (i < 3)
	{
		if (form != formies[i])
			delete cor[i];
		else
			y = i;
		i++;
	}
	if (y == -1)
		Intern::NoExistingFormException();
	return cor[y];
}
