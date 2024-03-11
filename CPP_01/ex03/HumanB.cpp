/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 23:21:08 by cbolat            #+#    #+#             */
/*   Updated: 2024/02/07 20:37:43 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanB.hpp"
#include "./HumanA.hpp"

HumanB::~HumanB(){
	std::cout << this->name << " is dead. " << std::endl;
}

void	HumanB::attack(void)
{

	if (this->weapon == NULL)
	{
		std::cout << this->name << " has no weapon to attack with" << std::endl;
		return ;
	}
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
	return ;
}

HumanB::HumanB(const std::string &name) : name(name)
{
	std::cout << name << " named HumanB created ! " << std::endl;
	this->name = name;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
