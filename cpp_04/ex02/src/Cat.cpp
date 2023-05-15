#include <Cat.hpp>

Cat::Cat() : Animal()
{
        std::cout << "Cat constructor called" << std::endl;
        this->type = "Cat";
	this->b = new Brain;
}

Cat::Cat(const Cat &a) : Animal()
{
	*this = a;
}

Cat::~Cat()
{
        std::cout << "Cat destructor called" << std::endl;
	delete this->b;
}

Cat &Cat::operator=(const Cat &f)
{
	std::cout << "Cat operator called" << std::endl;
        if (this == &f)
        {
		return *this;
        }
	delete this->b;
	b = new Brain(*f.b);
	this->type = f.type;
	return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meeeaow" << std::endl;
}

void Cat::Pure_Method()
{
	std::cout << "pure method called" << std::endl;
}
