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

void	ShrubberyCreationForm::tree(Node  *n, int level, char c) const
{
	std::ofstream	file(this->target + "_shrubberry", std::ofstream::out |  std::ofstream::trunc);
	if (file.is_open())
	{
	if (n == NULL)
		return ;
	this->tree(n->right, level  + 1, '/');
	for (int i = 0; i < level; i++)
		file <<  "   ";
	file << c << std::endl;
	this->tree(n->left, level  + 1, '\\');
	}
	else
		throw "File couldnt be open";
}


void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > 137)
		this->GradeTooLowException();
	Node n(1);
	this->tree(&n, 7, '_');
}
