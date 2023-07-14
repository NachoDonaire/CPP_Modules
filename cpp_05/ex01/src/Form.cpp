#include <Form.hpp>
#include <Bureaucrat.hpp>

Form::Form() :  name(""), sign(0), g_sgn(150), g_ex(150)
{
        std::cout << "Form constructor called" << std::endl;
}

Form::Form(std::string n, bool sign, int g_sign, int ex) :  name(n), sign(sign), g_sgn(g_sign), g_ex(ex)
{
	if (g_sign > 150)
		Form::GradeTooLowException();
	else if (g_sign < 1)
		Form::GradeTooHighException();
	//this->g_sgn = g_sign;
	if (ex > 150)
		Form::GradeTooLowException();
	else if (ex < 1)
		Form::GradeTooHighException();
	//this->g_ex = ex;
}

Form::Form(const Form &a) : name(a.name), sign(a.sign), g_sgn(a.g_sgn), g_ex(a.g_ex)
{
}

Form::~Form()
{
        std::cout << "Form destructor called" << std::endl;
}

std::string Form::getName() const
{
	return this->name;
}

bool	Form::getSign() const
{
	return this->sign;
}

int	Form::getGradeSign() const
{
	return this->g_sgn;
}

int	Form::getGradeExec() const
{
	return this->g_ex;
}

std::ostream& operator<<(std::ostream &os, const Form &t)
{
	std::string s;

	if (t.getSign() == true)
		s = "has signed";
	else
		s = "hasn t signed";
	os << t.getName() << " form with " << t.getGradeSign() << " of grade of sign and " << t.getGradeExec() << " grade of exec " << s;
	return os;
}

void	Form::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeSign())
		this->sign = 1;
	else
		Form::GradeTooLowException();
}
