
#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPointValue(0)
{ std::cout << "Default constructor called" << std::endl;}

Fixed::~Fixed(void)
{std::cout << "Destructor called" << std::endl;}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &fixed)
		return (*this);
	this->fixedPointValue = fixed.getRawBits();
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->fixedPointValue);
}
