#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat()
{
        std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150)
		this->GradeTooLowException();
	else if (g < 1)
		this->GradeTooHighException();
	this->grade = g;
}

Bureaucrat::Bureaucrat(const Bureaucrat &a) : name(a.name), grade(a.grade)
{
}

Bureaucrat::~Bureaucrat()
{
        std::cout << "Bureaucrat destructor called" << std::endl;
}

std::ostream& operator<<(std::ostream &os, const Bureaucrat &b)
{
	os << b.getName() << ", bureaucrat grade " << b.getGrade();
	return os;
}

void	Bureaucrat::GradeTooLowException()
{
	throw "Grade too low";
}

void	Bureaucrat::GradeTooHighException()
{
	throw "Grade too high";
}

std::string	Bureaucrat::getName() const
{
	return this->name;
}

int	Bureaucrat::getGrade() const
{
	return this->grade;
}

void	Bureaucrat::upGrade(int d)
{
	int	t;

	t = this->grade - d;
	if (t > 150)
		this->GradeTooLowException();
	else if (t < 1)
		this->GradeTooHighException();
	this->grade = t;
}

void	Bureaucrat::downGrade(int d)
{
	int	t;

	t = this->grade + d;
	if (t > 150)
		this->GradeTooLowException();
	else if (t < 1)
		this->GradeTooHighException();
	this->grade = t;
}

void	Bureaucrat::signForm(Form &f)
{
	if (f.getSign() == 1)
		std::cout << this->getName() << " couldn´t sign " << f.getName() << " because " << "is already signed" << std::endl;
	else
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
}

void	executeForm(Form const &form)
{
	try
		form.execute(*this);
	catch (std::string c)
		std::cout << c;
}
