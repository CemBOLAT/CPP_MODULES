/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:47:03 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 14:33:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->type = type;
}

Weapon::Weapon(std::string type){
	this->type = type;
	std::cout << this->getType() << " named Weapon created ! "  << std::endl;
}

Weapon::~Weapon(){
	std::cout << this->getType() << " named Weapon destroyed ! "  << std::endl;
}

std::string	Weapon::getType(void)
{
	return (this->type);
}

