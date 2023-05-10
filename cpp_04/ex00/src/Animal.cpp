#include <Animal.hpp>

Animal::Animal()
{
	std::cout << "Animal constructor called" << std::endl;
	this->type = "";
}

Animal::Animal(const Animal &a)
{
	this->type = a.type;
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal operator=(const Animal &f)
{
	if (this != &f)
	{
		this->type = f.type;
	}
	return *this;
}
