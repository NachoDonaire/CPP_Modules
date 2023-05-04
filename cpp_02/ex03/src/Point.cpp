#include <Point.hpp>

Point::Point() : x(0), y(0)
{
}

Point::~Point()
{
}

Point::Point(const Point &p) : x(p.x), y(p.y)
{
}

Point::Point(const float x_2, const float y_2) : x(x_2), y(y_2)
{
}

const Point	Point::operator=(const Point &p)
{
	if (this != &p)
	{
		(Fixed)this->x = p.x;
		(Fixed)this->y = p.y;
	}
	return *this;
}

const Fixed	Point::distance(Point const a,  Point const b) const
{
	float distance;
	float	ab;
	float	ord;

	distance = 0;
	ab = pow(a.x.toFloat() - b.x.toFloat(), 2);
	ord = pow(a.y.toFloat() - b.y.toFloat(), 2);
	distance = sqrt(ab + ord);
	const Fixed	tucker(distance);
	return tucker;
}

float	Point::dot(Point const a, Point const b)
{
	float	dot;

	dot = a.x.toFloat() * b.x.toFloat() + a.y.toFloat() * b.y.toFloat();
	return (dot);
}

float	Point::cross(Point a, Point b)
{
	float	cross;

	cross = a.x.toFloat() * b.y.toFloat() - a.y.toFloat() * b.x.toFloat();
	return (cross);
}

bool Point::is_in_straight(const Point a,const  Point b) const
{
	Fixed	m;
	Fixed	n;

	m = Fixed(b.y.toFloat() - a.y.toFloat()) / (b.x.toFloat() - a.x.toFloat());
	n = Fixed(b.y.toFloat() - m.toFloat() * b.x.toFloat());
	if (this->y.toFloat() == m.toFloat() * this->x.toFloat() + n.toFloat())
		return true;
	return false;

}
	










