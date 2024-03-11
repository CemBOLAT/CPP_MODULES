
#include "Ice.hpp"
#include "AMateria.hpp"

Ice::Ice() : AMateria("ice")
{
}

Ice::Ice(std::string const & type) : AMateria(type)
{
}

Ice::Ice(Ice const & src) : AMateria(src)
{
	*this = src;
}

Ice	&Ice::operator=(Ice const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
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

