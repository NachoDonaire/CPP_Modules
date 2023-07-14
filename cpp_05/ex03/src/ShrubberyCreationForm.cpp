#include <ShrubberyCreationForm.hpp>
#include <fstream>
#include  <random>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm()
{
        std::cout << "ShrubberyCreationForm constructor called" << std::endl;
        this->target = "Default target";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t) : AForm()
{
	std::cout << "Robotomy parameter constructor called" << std::endl;
	this->target = t;
}


ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
{
        this->target = a.target;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
        if (this != &f)
        {
                this->target = f.target;
        }
        return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 137)
		AForm::GradeTooLowException();
	std::ofstream file(this->target + "_shrubbery", std::ofstream::out | std::ofstream::trunc);
	if (file.is_open())
	{
		file << "Sebastián el tucker" << std::endl;
	}
	else
		throw "File couldnt be opened";
}
