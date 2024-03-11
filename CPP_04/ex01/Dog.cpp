/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:19:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	std::cout << "Dog constructor called" << std::endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;

	delete this->brain;
}

Dog::Dog(const Dog &obj) : Animal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = obj.type;
	this->brain = new Brain();
	this->brain->setIdeas(obj.brain->getIdeas(0));
}

Dog &Dog::operator=(const Dog &obj)
{
	std::cout << "Dog assignation operator called" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	if (this->brain)
		delete this->brain;
	this->brain = new Brain();
	this->brain->setIdeas(obj.brain->getIdeas(0));
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof Woof" << std::endl;
}
