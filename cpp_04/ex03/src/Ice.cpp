#include <Ice.hpp>

Ice::Ice()
{
        std::cout << "Ice constructor called" << std::endl;
        this->type = "";
}

Ice::Ice(const Ice &a)
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

std::string const &Ice::getType()
{
	return this->type;
}

AMateria	*Ice::clone()
{
	AMateria a = new *Ice;
	return a;
}

void	Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.name << " *" << std::endl;
}
