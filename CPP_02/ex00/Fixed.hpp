/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 16:46:42 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/03 16:05:45 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class	Fixed{
	private:
		int					fixedPointValue;
		static const int	fractionalBits = 8;
	public:
		// Orthodox Canonical Form
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);

		~Fixed(); 

		// Member functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
