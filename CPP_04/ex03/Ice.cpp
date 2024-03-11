
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice()
{
	this->_type = "ice";
}

Ice::Ice(std::string const & type)
{
	this->_type = type;
}

Ice::Ice(Ice const & src)
{
	*this = src;
}

Ice	&Ice::operator=(Ice const & rhs)
{
	_type = rhs._type;
	return (*this);
}

AMateria* Ice::clone() const
{
	return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

