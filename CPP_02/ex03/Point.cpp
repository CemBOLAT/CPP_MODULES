
#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::~Point(){}

Point::Point(const Point &point){
	*this = point;
}

Point &Point::operator=(const Point &obj)
{
	const_cast <Fixed&>(this->x) = obj.getX();
	const_cast <Fixed&>(this->y) = obj.getY();

	return *this;
}



Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y)){}

Fixed Point::getX(void) const {
	return (this->x);
}

Fixed Point::getY(void) const{
	return (this->y);
}

std::ostream&	operator<<(std::ostream& out, const Point& obj){
	out << "Point(" << obj.getX().toFloat() << ", " << obj.getY().toFloat() << ")";
	return (out);
}
