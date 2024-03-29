#include "iostream"
#include "unistd.h"
#include "cmath"

class	Fixed
{
	private:
		int					integer;
		static const int	bits=8;
	public:
		Fixed();
		Fixed(int const integercin);
		Fixed(float const flotancin);
		~Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int	toInt(void) const;
};

std::ostream& operator<<(std::ostream &os, const Fixed& f);
