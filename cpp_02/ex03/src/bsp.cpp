#include <Point.hpp>

Fixed	area_triangulo(Point const a, Point const b, Point const c)
{
	Fixed	ab;
	Fixed	bc;
	Fixed	ca;
	Fixed	Area;
	Fixed	s;
	float	A;

	ab = a.distance(a, b);
	bc = a.distance(b, c);
	ca = a.distance(c, a);
	s = Fixed((ab.toFloat() + bc.toFloat() + ca.toFloat()) / 2);
	A = sqrt(s.toFloat() * (s.toFloat() - ab.toFloat()) * (s.toFloat() - bc.toFloat()) * (s.toFloat() - ca.toFloat()));
	Area = Fixed(A);
	return (Area);
}


bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	pointa;
	Fixed	area_ab;
	Fixed	area_bc;
	Fixed	area_ca;
	Fixed	area_tri;
	Fixed	pointb;
	Fixed	pointc;


	pointa = point.distance(point, a);
	pointb = point.distance(point, b);
	pointc = point.distance(point, c);
	if (point.is_in_straight(a, b) || point.is_in_straight(b, c) || point.is_in_straight(c, a))
	{
		std::cout << "El punto esta en un vértice o en un lado" << std::endl;
		return false;
	}
	area_ab = area_triangulo(point, a, b);
	area_bc = area_triangulo(point, b, c);
	area_ca = area_triangulo(point, c, a);
	area_tri = area_triangulo(a, b, c);
	if (area_ab.toFloat() + area_bc.toFloat() + area_ca.toFloat() - area_tri.toFloat() <= EPSILON)
	{
		std::cout << "Punto in" << std::endl;
		return true;
	}
	std::cout << "Punto out" << std::endl;
	return false;
}
	
