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

/*comparation operators*/

bool	Fixed::operator>(const Fixed& f)
{
	std::cout << "< operator called" << std::endl;
	if (this->toFloat() > f.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<(const Fixed& f)
{
	std::cout << "< operator called" << std::endl;
	if (this->toFloat() < f.toFloat())
		return true;
	return false;
}

bool	Fixed::operator>=(const Fixed& f)
{
	std::cout << "< operator called" << std::endl;
	if (this->toFloat() >= f.toFloat())
		return true;
	return false;
}

bool	Fixed::operator<=(const Fixed& f)
{
	std::cout << "< operator called" << std::endl;
	if (this->toFloat() <= f.toFloat())
		return true;
	return false;
}

/*aritmetic operators*/

Fixed	Fixed::operator+(const Fixed &f)
{
	return ((Fixed(this->toFloat() + f.toFloat())));
}


Fixed	Fixed::operator-(const Fixed &f)
{
	return ((Fixed(this->toFloat() - f.toFloat())));
}

Fixed	Fixed::operator*(const Fixed &f)
{
	return (Fixed(this->toFloat() * f.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &f)
{
	if (f.toFloat() == 0.0f)
	{
		std::cout << "division by zero not defined" << std::endl;
		return *this;
	}
	return (Fixed(this->toFloat() / f.toFloat()));
}

/*increment operators*/

Fixed	Fixed::operator++()
{
	/*std::cout <<"el take dice taka: " << static_cast<float>(1 / (1 << (this->bits))) << std::endl;
	return (Fixed(this->toFloat() + (1 / (1 << (this->bits - 1)))));
	*/
	++this->integer;
	return *this;
}

Fixed	Fixed::operator--()
{
	//return (Fixed(this->toFloat() - (1 / (1 << this->bits))));
	--this->integer;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp.integer = this->integer++;
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp.integer = this->integer--;
	return tmp;
}

/*max and min*/

Fixed	&Fixed::max(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f2);
	return (f1);
}

const Fixed	&Fixed::max(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() < f2.toFloat())
		return (f2);
	return (f1);
}

Fixed	&Fixed::min(Fixed& f1, Fixed& f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	return (f1);
}

const Fixed	&Fixed::min(const Fixed& f1, const Fixed& f2)
{
	if (f1.toFloat() > f2.toFloat())
		return (f2);
	return (f1);
}

/*utils*/

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
