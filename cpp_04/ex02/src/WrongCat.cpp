#include <WrongCat.hpp>

WrongCat::WrongCat() : WrongAnimal()
{
        std::cout << "WrongCat constructor called" << std::endl;
        this->type = "";
}

WrongCat::WrongCat(const WrongCat &a) : WrongAnimal()
{
        this->type = a.type;
}

WrongCat::~WrongCat()
{
        std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

void WrongCat::makeSound() const
{
	std::cout << "Hi im a wrong cat" << std::endl;
}
