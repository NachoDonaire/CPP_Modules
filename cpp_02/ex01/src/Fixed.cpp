#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->integer = 0;
}

Fixed::Fixed(int const integercin)
{
	std::cout << "Int constructor called" << std::endl;
	this->integer = integercin * pow(2, this->bits);
}

Fixed::Fixed(float const flotancin)
{
	std::cout << "Float constructor called" << std::endl;
	//this->integer = static_cast<int>(flotancin) * pow(2, this->bits);
	this->integer = static_cast<int>(roundf(flotancin * (1 << this->bits)));
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

std::ostream& operator<<(std::ostream &os, const Fixed &f)
{
	os << f.toFloat();
	return os;
}

float	Fixed::toFloat(void)const
{
	//return roundf(static_cast<float>(this->integer) / static_cast<float>(pow(2, bits)));
    return static_cast<float>(this->integer) / (1 << this->bits);

}

int	Fixed::toInt(void)const
{
	return (this->integer >> this->bits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return (this->integer);
}

void	Fixed::setRawBits(int const raw)
{
	this->integer = raw;
}
