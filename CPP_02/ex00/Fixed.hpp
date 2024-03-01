
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
