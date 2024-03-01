/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 17:19:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/20 16:28:02 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"


// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	Fixed c(0);

// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;

// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;

// 	//std::cout << a / c << std::endl;
// 	return 0;
// }


int main(){
	Fixed	a(5);
	Fixed	b(2);

	Fixed c = a + b;
	Fixed d = a - b;
	Fixed e = a * b;
	Fixed f = a / b;

	std::cout << "a: " << a << std::endl;
	std::cout << "b: " << b << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl;
	std::cout << "e: " << e << std::endl;
	std::cout << "f: " << f << std::endl;
	std::cout << "a > b: " << (a > b) << std::endl;
	std::cout << "a < b: " << (a < b) << std::endl;
	std::cout << "a >= b: " << (a >= b) << std::endl;
	std::cout << "a <= b: " << (a <= b) << std::endl;
	std::cout << "a == b: " << (a == b) << std::endl;
	std::cout << "a != b: " << (a != b) << std::endl;
	std::cout << "++a: " << ++a << std::endl;
	std::cout << "a++: " << a++ << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "--a: " << --a << std::endl;
	std::cout << "a--: " << a-- << std::endl;
	std::cout << "a: " << a << std::endl;
	std::cout << "max(a, b): " << Fixed::max(a, b) << std::endl;
	std::cout << "min(a, b): " << Fixed::min(a, b) << std::endl;
	const Fixed g( Fixed( 5.05f ) * Fixed( 2 ) );
	const Fixed h( Fixed( 5.05f ) / Fixed( 2 ) );
	std::cout << "g: " << g << std::endl;
	std::cout << "h: " << h << std::endl;
	std::cout << "max(g, h): " << Fixed::max(g, h) << std::endl;
	std::cout << "min(g, h): " << Fixed::min(g, h) << std::endl;
}

 