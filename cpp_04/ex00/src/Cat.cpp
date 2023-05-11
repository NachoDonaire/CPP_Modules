#include <Cat.hpp>

Cat::Cat() : Animal()
{
        std::cout << "Cat constructor called" << std::endl;
        this->type = "Cat";
}

Cat::Cat(const Cat &a) : Animal()
{
        this->type = a.type;
}

Cat::~Cat()
{
        std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meeeaow" << std::endl;
}
