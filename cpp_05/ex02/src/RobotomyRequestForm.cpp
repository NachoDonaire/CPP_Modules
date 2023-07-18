#include <RobotomyRequestForm.hpp>
#include  <random>

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
        std::cout << "RobotomyRequestForm constructor called" << std::endl;
        this->target = "Default target";
}

RobotomyRequestForm::RobotomyRequestForm(std::string t) : AForm(t, 0, 72, 45)
{
	std::cout << "Robotomy parameter constructor called" << std::endl;
	this->target = t;
}


RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
{
        this->target = a.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
        if (this != &f)
        {
                this->target = f.target;
        }
        return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dis(1, 100);

	int	tucson = dis(gen);

	if (this->getSign() == 0)
		throw AForm::NotSignedException();
	if (executor.getGrade() > this->getGradeExec())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << tucson << std::endl;
		if (tucson % 2 == 0)
		{
			std::cout << "Theodor! Theodor.... TUUUUCKEEEER!!" << std::endl;
			std::cout << this->target << " has been robotomized" << std::endl;
		}
		else
		{
			std::cout << "Robotomized has failed" << std::endl;
		}
	}
}
