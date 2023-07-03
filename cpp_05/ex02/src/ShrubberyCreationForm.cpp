#include <ShrubberyCreationForm.hpp>

ShrubberyCreationForm::ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm constructor called" << std::endl;
        this->type = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &a)
{
        this->type = a.type;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
        std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}
