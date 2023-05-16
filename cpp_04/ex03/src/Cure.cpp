#include <Cure.hpp>

Cure::Cure()
{
        std::cout << "Cure constructor called" << std::endl;
        this->type = "";
}

Cure::Cure(const Cure &a)
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

std::string const &Cure::getType()
{
	return this->type;
}

AMateria	*Cure::clone()
{
	AMateria a = new *Cure;
	return a;
}

void	Cure::use(ICharacter &target)
{
	std::cout << "* heals " << target.name << "´s wounds *" << std::endl;
}
