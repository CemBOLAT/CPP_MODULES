/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:37:07 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 18:20:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria()
{
	this->_type = "default";
}

AMateria::AMateria(std::string const & type)
{
	this->_type = type;
}

AMateria::AMateria(const AMateria& copy)
{
	*this = copy;
}

AMateria& AMateria::operator=(const AMateria& op)
{
	if (this == &op)
		return (*this);
	this->_type = op._type;
	return (*this);
}

AMateria::~AMateria(){}

std::string const & AMateria::getType() const
{
	return (this->_type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}
