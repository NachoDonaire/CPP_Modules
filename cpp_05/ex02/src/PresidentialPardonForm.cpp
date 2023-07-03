#include <PresidentialPardonForm.hpp>

PresidentialPardonForm::PresidentialPardonForm()
{
        std::cout << "PresidentialPardonForm constructor called" << std::endl;
        this->type = "";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &a)
{
        this->type = a.type;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
        std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}
