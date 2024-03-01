
#ifndef POINT_HPP
# define POINT_HPP

# include "Fixed.hpp"

class	Point{
	private:
		Fixed const x;
		const Fixed y;
	public:
		Point();
		Point(const Point &point);
		Point &operator=(const Point &point);
		~Point();
		Point(const float x, const float y);

		Fixed	getX(void) const;
		Fixed	getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream& operator<<(std::ostream& out, const Point& point);

# endif
