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

Materia::Materia()
{
	_type = "materia";
}

Materia::Materia(std::string const & type)
{
	_type = type;
}

Materia::Materia(Materia const & src)
{
	*this = src;
}

Materia	&Materia::operator=(Materia const & rhs)
{
	_type = rhs._type;
	return (*this);
}

