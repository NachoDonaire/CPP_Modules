#include <Dog.hpp>

Dog::Dog() : Animal()
{
        std::cout << "Dog constructor called" << std::endl;
        this->type = "Dog";
	this->b = new Brain;
}

Dog::Dog(const Dog &a) : Animal()
{
	*this = a;
}

Dog::~Dog()
{
        std::cout << "Dog destructor called" << std::endl;
	delete this->b;
}

Dog &Dog::operator=(const Dog &f)
{
	std::cout << "Dog operator called" << std::endl;
        if (this == &f)
        {
		return *this;
        }
	delete this->b;
	b = new Brain(*f.b);
	this->type = f.type;
	return *this;

}

void Dog::makeSound() const
{
	std::cout << "Hhhhhuau" << std::endl;
}

void Dog::Pure_Method()
{
	std::cout << "Dog pure method called" << std::endl;
}
