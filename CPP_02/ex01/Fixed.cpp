
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
	this->fixedPointValue = fixed.fixedPointValue;
	return (*this);
}

void Fixed::setRawBits(int const raw)
{
	this->fixedPointValue = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->fixedPointValue);
}

Fixed::Fixed(const int nbr){
	std::cout << "Int constructor called" << std::endl;
	this->setRawBits(roundf(nbr * (DEFAULT_BIT_SHIFT << this->fractionalBits)));
}

Fixed::Fixed(const float nbr){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nbr * (DEFAULT_BIT_SHIFT << this->fractionalBits)));
}


Fixed::Fixed(const unsigned int nbr){
	std::cout << "Float constructor called" << std::endl;
	this->setRawBits(roundf(nbr * (DEFAULT_BIT_SHIFT << this->fractionalBits)));
}

float Fixed::toFloat(void) const 
{
	return ((float)this->getRawBits() / (DEFAULT_BIT_SHIFT << this->fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((int)this->getRawBits() / (DEFAULT_BIT_SHIFT << this->fractionalBits));
}

std::ostream &operator<<(std::ostream &out, const Fixed fixed)
{
	out << fixed.toFloat();
	return (out);
}
