#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm() : AForm()
{
        std::cout << "RobotomyRequestForm constructor called" << std::endl;
        this->target = "Default target";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
{
        this->target = a.target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
        if (this != &f)
        {
                this->target = f.target;
        }
        return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor)
{

