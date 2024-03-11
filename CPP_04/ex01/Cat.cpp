/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:19:23 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	std::cout << "Cat constructor called" << std::endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete this->brain;
}

// deep copy constructor
Cat::Cat(const Cat &obj)
{
	std::cout << "Cat copy (deep) constructor called" << std::endl;
	this->type = obj.type;
	this->brain = new Brain();
	this->brain->setIdeas(obj.brain->getIdeas(0));
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
