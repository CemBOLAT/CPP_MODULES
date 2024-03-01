/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 13:05:20 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/20 17:56:02 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

		Fixed getX(void) const;
		Fixed getY(void) const;

};

bool bsp( Point const a, Point const b, Point const c, Point const point);

std::ostream& operator<<(std::ostream& out, const Point& point);

# endif
