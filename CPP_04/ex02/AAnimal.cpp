/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:14:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 13:17:12 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Aanimal.hpp"

Aanimal::Aanimal()
{
	std::cout << "Aanimal constructor called" << std::endl;
	this->type = "Aanimal";
}

Aanimal::~Aanimal()
{
	std::cout << "Aanimal destructor called" << std::endl;
}

Aanimal::Aanimal(const Aanimal &obj)
{
	std::cout << "Aanimal copy constructor called" << std::endl;
	*this = obj;
}

Aanimal &Aanimal::operator=(const Aanimal &obj)
{
	std::cout << "Aanimal assignation operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	Aanimal::setType(std::string type)
{
	this->type = type;
}

std::string	Aanimal::getType(void) const
{
	return (this->type);
}
