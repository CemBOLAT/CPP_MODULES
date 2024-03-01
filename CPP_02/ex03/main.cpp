

#include <iostream>
#include "Point.hpp"

int main( void ) {

	Point	a(0, 0);
	Point	b(0, 3.0);
	Point	c(3, 3);
	Point	point(1, 1);

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "c = " << c << std::endl;
	std::cout << "point = " << point << std::endl;

	std::cout << "bsp(a, b, c, point) = " << bsp(a, b, c, point) << std::endl;
	return 0;
}
