#include "iostream"
#include "unistd.h"

class	Fixed
{
	private:
		int					integer;
		static const int	bits=8;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		Fixed& operator=(const Fixed &f);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};
