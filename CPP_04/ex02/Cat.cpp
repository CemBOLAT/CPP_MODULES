/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/12 18:27:13 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal()
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

Cat::Cat(const Cat &obj) : AAnimal(obj)
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
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	this->brain->setIdeas(obj.brain->getIdeas(0));
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Miav Miav" << std::endl;
}
