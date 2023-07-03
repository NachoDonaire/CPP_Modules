#include <Cat.hpp>

Cat::Cat() : Animal()
{
        std::cout << "Cat constructor called" << std::endl;
        this->type = "Cat";
	this->b = new Brain;
}

Cat::Cat(const Cat &a) : Animal(), b(new Brain(*a.b))
{
        this->type = a.type;
}

Cat::~Cat()
{
	delete this->b;
        std::cout << "Cat destructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &f)
{
        if (this != &f)
        {
		delete this->b;
		b = new Brain(*f.b);
                this->type = f.type;
        }
        return *this;
}

void Cat::makeSound() const
{
	std::cout << "Meeeaow" << std::endl;
}

void	Cat::Pure_Method()
{
	std::cout << "metodo puro de gato" << std::endl;
}
