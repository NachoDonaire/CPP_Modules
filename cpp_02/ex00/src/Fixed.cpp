#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->integer = 0;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	this->integer = f.integer;
}

Fixed& Fixed::operator=(const Fixed &f)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &f)
		this->integer = f.integer;
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	std::cout << this->integer << std::endl;
	return (this->integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->integer = raw;
}
