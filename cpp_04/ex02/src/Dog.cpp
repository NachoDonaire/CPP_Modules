#include <Dog.hpp>

Dog::Dog() : Animal()
{
        std::cout << "Dog constructor called" << std::endl;
        this->type = "Dog";
	this->b = new Brain;
}

Dog::Dog(const Dog &a) : Animal(), b(new Brain(*a.b))
{
	std::cout << "dog copy constructor called" << std::endl;
        this->type = a.type;
}

Dog::~Dog()
{
        std::cout << "Dog destructor called" << std::endl;
		delete this->b;
}

Dog &Dog::operator=(const Dog &f)
{
        if (this != &f)
        {
		delete this->b;
		this->b = new Brain(*f.b);
                this->type = f.type;
        }
        return *this;
}

void Dog::makeSound() const
{
	std::cout << "Hhhhhuau" << std::endl;
}

void	Dog::compareBrain(const Dog &a)
{
	std::cout << "Address 1: " << &this->b << std::endl;
	std::cout << "Address 2: " << a.getBrain() << std::endl;
}

Brain	*Dog::getBrain() const
{
	return this->b;
}
