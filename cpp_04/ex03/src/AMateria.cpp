#include <AMateria.hpp>

AMateria::AMateria()
{
        std::cout << "AMateria constructor called" << std::endl;
        this->type = "";
}

AMateria::AMateria(const AMateria &a)
{
        this->type = a.type;
}

AMateria::~AMateria()
{
        std::cout << "AMateria destructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

std::string	const	&AMateria::getType() const
{
	return this->type;
}

void	AMateria::use(ICharacter& target)
{
	(void)target;
}
