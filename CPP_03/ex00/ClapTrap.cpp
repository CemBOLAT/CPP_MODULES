/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:47:39 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:13:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	:	name(DEFAULT_NAME),
		hitPoint(CLAP_HP),
		energyPoint(CLAP_EP),
		attackDamage(CLAP_AD)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
	:	name(name),
		hitPoint(CLAP_HP),
		energyPoint(CLAP_EP),
		attackDamage(CLAP_AD)
{
	std::cout << "ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clap;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &clap)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	if (this == &clap)
		return (*this);
	setAll(clap.name, clap.hitPoint, clap.energyPoint, clap.attackDamage);
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target){
	if (this->energyPoint == 0){
		std::cout << "No energy left for ClapTrap " << this->name << " attack denied to " << target << std::endl;
	}
	else if (this->hitPoint == 0){
		std::cout << "No hit points left for ClapTrap " << this->name << " attack denied to " << target << std::endl;
	}
	else {
		this->energyPoint -= 1;
		std::cout <<  "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int a){
	if (this->energyPoint == 0){
		std::cout << "No energy left for ClapTrap " << this->name << " to repair him/herself " << std::endl;
	}
	else if (this->hitPoint == 0){
		std::cout << "No hit points left for ClapTrap " << this->name << " to repair him/herself " << std::endl;
	}
	else {
		this->energyPoint -= 1;
		std::cout <<  "ClapTrap " << this->name << " repairs " << a << ", heal points " << std::endl;
		this->hitPoint += a;
	}
}

void	ClapTrap::takeDamage(unsigned int amount){
	if (this->hitPoint == 0){
		std::cout << this->name << " cannot take damage because its already dead. " << std::endl;
	}
	else {
		if (this->hitPoint < (int)amount){
			std::cout << this->name << " takes " << amount << " damage points" << std::endl;
			this->hitPoint = 0;
			std::cout << this->name << " is dead" << std::endl;
		}
		else {
			std::cout << this->name << " takes " << amount << " damage points" << std::endl;
			this->hitPoint -= amount;
		}

	}
}

std::string	ClapTrap::getName(void) const{
	return (this->name);
}

int			ClapTrap::getHitPoint(void) const{
	return (this->hitPoint);
}

int			ClapTrap::getEnergyPoint(void) const{
	return (this->energyPoint);
}

int			ClapTrap::getAttackDamage(void) const{
	return (this->attackDamage);
}

void		ClapTrap::setName(const std::string &name){
	this->name = name;
}

void		ClapTrap::setHitPoint(int hitPoint){
	this->hitPoint = hitPoint;
}

void		ClapTrap::setEnergyPoint(int energyPoint){
	this->energyPoint = energyPoint;
}

void		ClapTrap::setAttackDamage(int attackDamage){
	this->attackDamage = attackDamage;
}

void		ClapTrap::setAll(const std::string &name, int hitPoint, int energyPoint, int attackDamage){
	setName(name);
	setHitPoint(hitPoint);
	setEnergyPoint(energyPoint);
	setAttackDamage(attackDamage);
}

std::ostream &operator<<(std::ostream &out, const ClapTrap &clap){
	out << "NAME : " << clap.getName() << std::endl;
	out << "HP : " << clap.getHitPoint() << std::endl;
	out << "EP : " << clap.getEnergyPoint() << std::endl;
	out << "AD : " << clap.getAttackDamage() << std::endl;
	return (out);
}
