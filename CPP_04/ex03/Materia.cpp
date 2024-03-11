/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:50:36 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 13:52:18 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materia.hpp"

Materia::Materia() : AMateria()
{
}

Materia::Materia(std::string const & type) : AMateria(type)
{
}

Materia::Materia(Materia const & src) : AMateria(src)
{
	*this = src;
}

Materia	&Materia::operator=(Materia const & rhs)
{
	if (this != &rhs)
		this->_type = rhs._type;
	return (*this);
}

