#include <Animal.hpp>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "Default animal";
}

Animal::Animal(const Animal &a)
{
	this->type = a.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &f)
{
	if (this != &f)
	{
		this->type = f.type;
	}
	return *this;
}

void 	Animal::makeSound() const
{
	std::cout << "I am just an animal" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}
