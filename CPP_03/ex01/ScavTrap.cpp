/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:40:37 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:22:59 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	:	ClapTrap(DEFAULT_NAME_SCAV, SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name)
	:	ClapTrap(name, SCAV_HP, SCAV_EP, SCAV_AD)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &scav)
	:	ClapTrap(scav)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &scav)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	if (this == &scav)
		return (*this);
	this->setAll(scav.getName(), scav.getHitPoint(), scav.getEnergyPoint(), scav.getAttackDamage());
	return (*this);
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::guardGate(){
	if (this->getHitPoint() == 0)
		std::cout << "ScavTrap " << this->getName() << " has no hit points left\nCannot enter Gate keeper mode ! " << std::endl;
	else
		std::cout << "ScavTrap " << this->getName() << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(std::string const &target){
	if (this->getEnergyPoint() == 0){
		std::cout << "No energy left for ScavTrap " << this->getName() << " attack denied to " << target << std::endl;
	}
	else if (this->getHitPoint() == 0){
		std::cout << "No hit points left for ScavTrap " << this->getName() << " attack denied to " << target << std::endl;
	}
	else {
		this->setEnergyPoint(this->getEnergyPoint() - 1);
		std::cout <<  "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAttackDamage() << " points of damage" << std::endl;
	}
}
