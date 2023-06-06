#include <Cure.hpp>

Cure::Cure()
{
        std::cout << "Cure constructor called" << std::endl;
        this->type = "cure";
}

Cure::Cure(const Cure &a) : AMateria(a)
{
        this->type = a.type;
}

Cure::~Cure()
{
        std::cout << "Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}
/*
std::string const &Cure::getType() const 
{
	return this->type;
}
*/
AMateria	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.getName() << "´s wounds *" << std::endl;
}
