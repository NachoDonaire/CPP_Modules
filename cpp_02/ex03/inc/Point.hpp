#ifndef	POINT_HPP
#define POINT_HPP

#include <Fixed.hpp>
#define EPSILON 0.001


class	Point
{
	private:
		Fixed	const	x;
		Fixed	const	y;

	public:
		Point();
		~Point();
		Point(const Point &p);
		Point(const float x_2, const float y_2);
		const Point	operator=(const Point &p);
		const Fixed	distance(Point const a, Point const b) const;
		float	dot(const Point a, const Point b);
		float	cross(Point a, Point b);
		bool	is_in_straight(const Point a, const Point b) const;
};


#endif
