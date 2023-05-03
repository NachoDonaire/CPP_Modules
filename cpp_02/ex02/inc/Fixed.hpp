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
		friend std::ostream& operator<<(std::ostream &os, const Fixed& f);
		int		getRawBits(void) const;
		void		setRawBits(int const raw);
		float		toFloat(void) const;
		int		toInt(void) const;
		bool		operator>(const Fixed &f);
		bool 		operator<(const Fixed &f);
		bool 		operator<=(const Fixed &f);
		bool 		operator>=(const Fixed &f);
		Fixed		 operator+(const Fixed &f);
		Fixed		 operator-(const Fixed &f);
		Fixed 		operator*(const Fixed &f);
		Fixed		 operator/(const Fixed &f);
		Fixed		 operator++();
		Fixed		 operator--();
		Fixed 		operator++(int);
		Fixed 		operator--(int);
		static const Fixed	&min(const Fixed &f1, const Fixed &f2);
		static const Fixed&     max(const Fixed &f1, const Fixed &f2);
		static Fixed		&min(Fixed &f1, Fixed &f2);
		static Fixed		&max(Fixed &f1, Fixed &f2);
		
};
