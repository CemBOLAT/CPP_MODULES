
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

#ifndef DEFAULT_BIT_SHIFT
# define DEFAULT_BIT_SHIFT 1
#endif

class	Fixed{
	private:
		int	fixedPointValue;
		static const int fractionalBits = 8;
	public:
		// Orthodox Canonial Form 
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator=(const Fixed &fixed);
		~Fixed();

		// Public Constructors
		Fixed(const int nbr);
		Fixed(const float nbr);
		Fixed(const unsigned int nbr);

		// Member Functions
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed fixed);

#endif
