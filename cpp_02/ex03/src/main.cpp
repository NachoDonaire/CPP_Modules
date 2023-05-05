#include <Point.hpp>
#include <generalib.hpp>

int main( void ) {

	Fixed x1(2);
	Fixed y1(2);
	Fixed x2;
	Fixed y2;
	Fixed distance;

	Point a(1, 1);
	Point b(2, 5);
	Point c(3, 1);
	Point point(3,11);

	x1 = x2;
	std::cout << x1 << std::endl;

	std::cout << "area----: " << area_triangulo(a, b, c) << std::endl;
	distance = c.is_in_straight(a, b);
	if (bsp(a, b, c, point))
		std::cout << "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA" << std::endl;
	else
		std::cout << "BBBBBBBBBBBBBBBBBBBBBBBB" << std::endl;
	std::cout << "------------solution: " << bsp(a, b, c, point)  << std::endl;
	return 0;
}
