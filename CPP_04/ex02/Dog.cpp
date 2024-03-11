/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:51 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/12 18:33:45 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal()
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

Dog::Dog(const Dog &obj) : AAnimal(obj)
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = obj;
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
