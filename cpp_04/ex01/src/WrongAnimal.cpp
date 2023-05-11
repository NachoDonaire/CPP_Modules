#include <WrongAnimal.hpp>

WrongAnimal::WrongAnimal()
{
        std::cout << "WrongAnimal constructor called" << std::endl;
        this->type = "";
}

WrongAnimal::WrongAnimal(const WrongAnimal &a)
{
        this->type = a.type;
}

WrongAnimal::~WrongAnimal()
{
        std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

void 	WrongAnimal::makeSound() const
{
	std::cout << "Hi im a wrong animal" << std::endl;
}
