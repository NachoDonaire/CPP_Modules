#include <ICharacter.hpp>

ICharacter::ICharacter()
{
        std::cout << "ICharacter constructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter &a)
{
	(void)a;
}

ICharacter::~ICharacter()
{
        std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter &ICharacter::operator=(const ICharacter &f)
{
        if (this != &f)
        {
		return *this;
        }
        return *this;
}
