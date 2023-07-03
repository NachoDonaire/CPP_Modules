#include <RobotomyRequestForm.hpp>

RobotomyRequestForm::RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm constructor called" << std::endl;
        this->type = "";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &a)
{
        this->type = a.type;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
        std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}
