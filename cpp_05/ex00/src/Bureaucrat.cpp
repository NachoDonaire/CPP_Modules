#include <Bureaucrat.hpp>

Bureaucrat::Bureaucrat()
{
        std::cout << "Bureaucrat constructor called" << std::endl;
        this->type = "";
}

Bureaucrat::Bureaucrat(const Bureaucrat &a)
{
        this->type = a.type;
}

Bureaucrat::~Bureaucrat()
{
        std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat Bureaucrat::operator=(const Bureaucrat &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}
