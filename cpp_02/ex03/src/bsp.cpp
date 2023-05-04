#include <Point.hpp>

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	ab;
	Fixed	bc;
	Fixed	ca;
	Fixed	pointa;
	Fixed	pointb;
	Fixed	pointc;
	float	area_tri;

	ab = point.distance(a, b);
	bc = point.distance(b, c);
	ca = point.distance(c, a);

	pointa = point.distance(point, a);
	pointb = point.distance(point, b);
	pointc = point.distance(point, c);
	if (point.is_in_straight(a, b) || point.is_in_straight(b, c) || point.is_in_straight(c, a))
	{
		std::cout << "pertenece a" << std::endl;
		return false;
	}

	return true;
}
	
