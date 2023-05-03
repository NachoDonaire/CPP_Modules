#include <Fixed.hpp>

int main( void ) {
	Fixed a;
Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed c(2);
	Fixed d;
std::cout << a << std::endl;
std::cout << ++a << std::endl;
std::cout << a << std::endl;
std::cout << a++ << std::endl;
std::cout << a << std::endl;
std::cout << b << std::endl;
std::cout << c + b << std::endl;
std::cout << c - b << std::endl;
std::cout << c * b << std::endl;
std::cout << c / b << std::endl;
std::cout << c.max(c, d) << std::endl;
std::cout << c.min(a, b) << std::endl;
//std::cout << Fixed::max( a, b ) << std::endl;
return 0;
}
