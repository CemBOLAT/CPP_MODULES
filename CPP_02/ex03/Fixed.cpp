
#include "Fixed.hpp"

Fixed::Fixed(void) : fixedPointValue(0)
{ /* intentionally left empty */}

Fixed::~Fixed(void){/* intentionally left empty */}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed	&Fixed::operator=(const Fixed &fixed)
{
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
	return (this->fixedPointValue);
}

Fixed::Fixed(const int nbr){
	this->fixedPointValue = nbr * (DEFAULT_BIT_SHIFT << this->fractionalBits);
}

Fixed::Fixed(const float nbr){
	this->fixedPointValue = roundf(nbr * (DEFAULT_BIT_SHIFT << this->fractionalBits));
}


float Fixed::toFloat(void) const
{
	return ((float)this->getRawBits() / (DEFAULT_BIT_SHIFT << this->fractionalBits));
}

int Fixed::toInt(void) const
{
	return ((int)this->getRawBits() / (DEFAULT_BIT_SHIFT << this->fractionalBits));
}

Fixed	Fixed::operator+(const Fixed &fixed) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() + fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	Fixed result;

	result.setRawBits(this->getRawBits() - fixed.getRawBits());
	return (result);
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	Fixed result;

	result.setRawBits(roundf(toFloat() * fixed.toFloat() * (DEFAULT_BIT_SHIFT << this->fractionalBits)));
	return (result);
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	Fixed result;
	if (fixed.toFloat() == 0){
		return (std::cout << "Division by 0 ! Error Code : ", -1);
	}
	result.setRawBits(roundf(toFloat() / fixed.toFloat() * (DEFAULT_BIT_SHIFT << this->fractionalBits)));
	return (result);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	return (b);
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->getRawBits() < fixed.getRawBits());
}

bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->getRawBits() > fixed.getRawBits());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->getRawBits() <= fixed.getRawBits());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->getRawBits() >= fixed.getRawBits());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->getRawBits() == fixed.getRawBits());
}

bool Fixed::operator!=(const Fixed &fixed) const{
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed &Fixed::operator++(void)
{
	this->fixedPointValue += DEFAULT_BIT_SHIFT;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp = *this;
	this->fixedPointValue += DEFAULT_BIT_SHIFT;
	return (tmp);
}

Fixed &Fixed::operator--(void){
	this->fixedPointValue -= DEFAULT_BIT_SHIFT;
	return (*this);
}

Fixed Fixed::operator--(int){
	Fixed tmp = *this;
	this->fixedPointValue -= DEFAULT_BIT_SHIFT;
	return (tmp);
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}
