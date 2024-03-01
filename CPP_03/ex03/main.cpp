/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:40:59 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:55:43 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(){
	DiamondTrap diamond("DiamondTrap");

	diamond.attack("target");

	diamond.takeDamage(10);
	diamond.takeDamage(10);

	std::cout << "Diamond Trap Name : " << diamond.get_Name() << std::endl;
	std::cout << diamond;

	return (0);
}
