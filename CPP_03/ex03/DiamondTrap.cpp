/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:43:32 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:55:04 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: ClapTrap("Default Diamond_clap_name", FRAG_HP, SCAV_EP, FRAG_EP)
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = DEFAULT_NAME_DIAMOND;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string &name)
	: ClapTrap(name + "_clap_name", FRAG_HP, SCAV_EP, FRAG_EP)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
}

DiamondTrap::DiamondTrap(const DiamondTrap &obj) 
	: ClapTrap(obj), ScavTrap(obj), FragTrap(obj)
{
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	this->_name = obj._name;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &obj)
{
	if (this == &obj)
		return (*this);
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	this->_name = obj._name;

	ClapTrap::setName(this->_name + "_clap_name");
	FragTrap::setHitPoint(FragTrap::getHitPoint());
	ScavTrap::setEnergyPoint(ScavTrap::getEnergyPoint());
	FragTrap::setAttackDamage(FragTrap::getAttackDamage());
	return (*this);
}

void	DiamondTrap::whoAmI(void)
{
	if (FragTrap::getEnergyPoint() == 0)
	{
		std::cout << "I cannot answer this question because I am already dead " << std::endl;
		return;
	}
	std::cout << "My name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::getName() << std::endl;
}


std::string	DiamondTrap::get_Name(void) const
{
	return (this->_name);
}

void	DiamondTrap::set_Name(const std::string &name)
{
	this->_name = name;
}
