/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:45:39 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 18:29:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(std::string const & type) : AMateria(type)
{
}

Cure::Cure(Cure const & src) : AMateria(src)
{
	*this = src;
}

Cure	&Cure::operator=(Cure const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

AMateria* Cure::clone() const
{
	return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
