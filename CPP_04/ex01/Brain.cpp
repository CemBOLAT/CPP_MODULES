/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 18:02:30 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:17:36 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &obj)
{
	std::cout << "Brain copy (deep) constructor called" << std::endl;
	*this = obj;
}

Brain &Brain::operator=(const Brain &obj)
{
	std::cout << "Brain assignation operator called" << std::endl;
	if (this != &obj)
	{
		for (int i = 0; i < IDEA_SIZE; i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

void	Brain::setIdeas(std::string idea)
{
	for (int i = 0; i < IDEA_SIZE; i++)
		this->ideas[i] = idea;
}

std::string	Brain::getIdeas(int i) const
{
	return (this->ideas[i]);
}
