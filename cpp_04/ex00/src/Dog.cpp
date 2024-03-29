#include <Dog.hpp>

Dog::Dog() : Animal()
{
        std::cout << "Dog constructor called" << std::endl;
        this->type = "Dog";
}

Dog::Dog(const Dog &a) : Animal()
{
        this->type = a.type;
}

Dog::~Dog()
{
        std::cout << "Dog destructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &f)
{
        if (this != &f)
        {
                this->type = f.type;
        }
        return *this;
}

void Dog::makeSound() const
{
	std::cout << "Hhhhhuau" << std::endl;
}
