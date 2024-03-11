/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:14:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 13:17:12 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "AAnimal constructor called" << std::endl;
	this->type = "AAnimal";
}

AAnimal::~AAnimal()
{
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &obj)
{
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = obj;
}

AAnimal &AAnimal::operator=(const AAnimal &obj)
{
	std::cout << "AAnimal assignation operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	AAnimal::setType(std::string type)
{
	this->type = type;
}

std::string	AAnimal::getType(void) const
{
	return (this->type);
}
