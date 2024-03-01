/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:46:42 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/20 16:23:51 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

#ifndef DEFAULT_BIT_SHIFT
# define DEFAULT_BIT_SHIFT 1
#endif

class	Fixed{
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
	public:
		// Orthodox Canonnical Form
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		// Public Constructor
		Fixed(const int nbr);
		Fixed(const float nbr);
		// Member Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;

		// Arithmetic Operators
		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		// Comparison Operators
		bool	operator<(const Fixed &fixed) const;
		bool	operator>(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		// Increment and Decrement Operators
		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		// Public overloaded member functions
		static			Fixed &min(Fixed &a, Fixed &b) ;
		static	const	Fixed &min(const Fixed &a, const Fixed &b);
		static			Fixed &max(Fixed &a, Fixed &b);
		static	const	Fixed &max(const Fixed &a, const Fixed &b);

};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif