#include <AForm.hpp>
#include <Bureaucrat.hpp>

AForm::AForm() :  name(""), sign(0), g_sgn(150), g_ex(150)
{
        std::cout << "AForm constructor called" << std::endl;
}

AForm::AForm(std::string n, bool sign, int g_sign, int ex) :  name(n), sign(sign), g_sgn(g_sign), g_ex(ex)
{
	if (g_sign > 150)
		throw AForm::GradeTooLowException();
	else if (g_sign < 1)
		throw AForm::GradeTooHighException();
	//this->g_sgn = g_sign;
	if (ex > 150)
		throw AForm::GradeTooLowException();
	else if (ex < 1)
		throw AForm::GradeTooHighException();
	//this->g_ex = ex;
}

AForm::AForm(const AForm &a) : name(a.name), sign(a.sign), g_sgn(a.g_sgn), g_ex(a.g_ex)
{
}

AForm::~AForm()
{
        std::cout << "AForm destructor called" << std::endl;
}

std::string AForm::getName() const
{
	return this->name;
}

bool	AForm::getSign() const
{
	return this->sign;
}

int	AForm::getGradeSign() const
{
	return this->g_sgn;
}

int	AForm::getGradeExec() const
{
	return this->g_ex;
}

std::ostream& operator<<(std::ostream &os, const AForm &t)
{
	std::string s;

	if (t.getSign() == true)
		s = "has signed";
	else
		s = "hasn t signed";
	os << t.getName() << " form with " << t.getGradeSign() << " of grade of sign and " << t.getGradeExec() << " grade of exec " << s;
	return os;
}

void	AForm::signIn()
{
	this->sign = 1;
}

void	AForm::beSigned(Bureaucrat &b)
{
	if (b.getGrade() <= this->getGradeSign())
		this->signIn();
	else
		throw AForm::GradeTooLowException();
}
