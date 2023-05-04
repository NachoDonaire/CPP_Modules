#include <Fixed.hpp>

class	Point
{
	private:
		Fixed	const	x;
		Fixed	const	y;

	public:
		Point();
		~Point();
		Point(const Point &p);
		Point(const Fixed x_2, const Fixed y_2);
		const Point	operator=(const Point &p);
		//Fixed	distance(Point a, Point b);
};
