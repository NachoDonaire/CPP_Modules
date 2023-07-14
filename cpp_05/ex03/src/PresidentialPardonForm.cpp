#include <PresidentialPardonForm.hpp>
#include  <random>

PresidentialPardonForm::PresidentialPardonForm() : AForm()
{
        std::cout << "PresidentialPardonForm constructor called" << std::endl;
        this->target = "Default target";
}

PresidentialPardonForm::PresidentialPardonForm(std::string t) : AForm()
{
	std::cout << "Robotomy parameter constructor called" << std::endl;
	std::cout << t << std::endl;
	this->target = t;
	std::cout  <<  target << std::endl;
}


PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
        this->target = a.target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
        std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
        if (this != &f)
        {
                this->target = f.target;
        }
        return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 5)
		AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}
