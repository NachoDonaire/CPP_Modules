#include <Cat.hpp>

Cat::Cat() : Animal()
{
        std::cout << "Cat constructor called" << std::endl;
        this->type = "Cat";
	this->b = new Brain;
}

Cat::Cat(const Cat &a) : Animal()
{
        this->type = a.type;
}

Cat::~Cat()
{
        std::cout << "Cat destructor called" << std::endl;
	delete this->b;
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
