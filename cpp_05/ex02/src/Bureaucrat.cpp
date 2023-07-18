#include <Bureaucrat.hpp>
#include <RobotomyRequestForm.hpp>

Bureaucrat::Bureaucrat()
{
        std::cout << "Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g) : name(n)
{
	if (g > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (g < 1)
		throw Bureaucrat::GradeTooHighException();
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
		throw Bureaucrat::GradeTooLowException();
	else if (t < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = t;
}

void	Bureaucrat::downGrade(int d)
{
	int	t;

	t = this->grade + d;
	if (t > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (t < 1)
		throw Bureaucrat::GradeTooHighException();
	this->grade = t;
}

void	Bureaucrat::signAForm(AForm &f)
{
	if (f.getSign() == 1)
		std::cout << this->getName() << " couldn´t sign " << f.getName() << " because " << "is already signed" << std::endl;
	else
	{
		f.beSigned(*this);
		std::cout << this->getName() << " signed " << f.getName() << std::endl;
	}
}

void	Bureaucrat::executeAForm(AForm const &form) const
{
		form.execute(*this);
		std::cout << *this << " executed " << form << std::endl;
}
