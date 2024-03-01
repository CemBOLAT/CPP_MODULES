/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 16:22:36 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/20 16:25:11 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed x = point.getX();
	Fixed y = point.getY();
	Fixed x1 = a.getX();
	Fixed y1 = a.getY();
	Fixed x2 = b.getX();
	Fixed y2 = b.getY();
	Fixed x3 = c.getX();
	Fixed y3 = c.getY();
	Fixed zero = Fixed(0);

	Fixed a1 = ((y2 - y1) * (x - x1)) - ((x2 - x1) * (y - y1));
	Fixed a2 = ((y3 - y2) * (x - x2)) - ((x3 - x2) * (y - y2));
	Fixed a3 = ((y1 - y3) * (x - x3)) - ((x1 - x3) * (y - y3));

	if ((a1 > zero && a2 > zero && a3 > zero)||
		(a1 < zero && a2 < zero && a3 < zero))
		return true;
	return false;
}
