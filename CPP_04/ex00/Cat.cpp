/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:08:00 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat &obj) : Animal(obj)
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = obj;
}

Cat &Cat::operator=(const Cat &obj)
{
	std::cout << "Cat assignation operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miav Miav" << std::endl;
}
