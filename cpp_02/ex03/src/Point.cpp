#include <Point.hpp>

Point::Point()
{
}

Point::~Point()
{
}

Point::Point(const Point &p)
{
	p.x = x;
	p.y = y;
}

Point::Point(const Fixed x_2, const Fixed y_2)
{
	x = x_2;
	y = y_2;
}

const Point	Point::operator=(const Point &p)
{
	if (this != &p)
	{
		this->x = p.x;
		this->y = p.y;
	}
	return *this;
}
/*
Fixed	distance(Point a, Point b)
{
	Fixed distance (sqrt(pow((b.x.toFloat() - a.y.toFloat()), 2) + pow(b.y.toFloat() - a.y.toFloat(), 2)));
	return distance;
}
*/
