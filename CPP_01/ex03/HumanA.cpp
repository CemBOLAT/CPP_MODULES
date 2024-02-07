/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:13:24 by cbolat            #+#    #+#             */
/*   Updated: 2024/02/07 20:36:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon)
{
	std::cout << name << " named HumanA created ! " << std::endl;
}

void	HumanA::attack(void)
{
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}


HumanA::~HumanA()
{
	std::cout << this->name << " died" << std::endl;
}
