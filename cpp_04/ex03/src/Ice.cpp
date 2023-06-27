#include <Ice.hpp>

Ice::Ice()
{
        std::cout << "Ice constructor called" << std::endl;
        this->type = "ice";
}

Ice::Ice(const Ice &a) : AMateria(a)
{
        this->type = a.type;
}

Ice::~Ice()
{
        std::cout << "Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

AMateria	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
