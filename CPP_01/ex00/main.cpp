/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:26 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 13:35:30 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	{
		Zombie *zombie = new Zombie("zombie");
		zombie->announce();
		delete zombie;
	}
	std::cout << "-------------------" << std::endl;
	{
		randomChump("mombi");
	}
	std::cout << "-------------------" << std::endl;
	{
		Zombie *bombi = newZombie("bombi");
		bombi->announce();
		delete bombi;
	}
	return 0;
}
