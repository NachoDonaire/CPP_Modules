#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
        std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a) : AForm(a.getName(), a.getSign(), a.getGradeSign(), a.getGradeExec())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
        if (this != &f)
        {
			return *this;
        }
        return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSign() == 0)
		this->NotSignException();
	std::cout << executor.getName() << std::endl;
}

void	RobotomyRequestForm::PureMethod()
{
	std::cout << "Pure method done" << std::endl;
}
