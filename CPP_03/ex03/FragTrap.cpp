/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:19:57 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 12:46:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap (DEFAULT_NAME_FRAG, FRAG_HP, FRAG_EP, FRAG_AD)
{
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap destructor called" << std::endl;
}

FragTrap::FragTrap(const std::string &str)
	: ClapTrap (str, FRAG_HP, FRAG_EP, FRAG_AD)
{
	std::cout << "FragTrap constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &obj)
{
	std::cout << "FragTrap assignation operator called" << std::endl;
	if (this == &obj)
		return (*this);
	this->setAll(obj.getName(), obj.getHitPoint(), obj.getEnergyPoint(), obj.getAttackDamage());
	return (*this);
}

FragTrap::FragTrap(const FragTrap &obj)
	: ClapTrap(obj)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void){
	if (this->getHitPoint() == 0){
		std::cout << "No hit points left for FragTrap " << this->getName() << " high five denied" << std::endl;
	}
	else
		std::cout << "!!!!!!!! High Five Guys !!!!!!!!!! " << std::endl;
}
