/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:30 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/15 13:24:56 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(const std::string &names){
	this->name = names;
	std::cout << this->name << " is created !" << std::endl;
}

Zombie::Zombie(){
	this->name = "";
}

void Zombie::announce(){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->name << " is dead" << std::endl;
}

void	Zombie::setName(const std::string &name){
	this->name = name;
}

std::string	Zombie::getName() const {
	return this->name;
}
