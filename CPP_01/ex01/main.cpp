/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:26 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 13:39:57 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(void){
	{
		Zombie *zombie = new Zombie("zombie");
		zombie->announce();
		delete zombie;
	}
	std::cout << "---------------------" << std::endl;
	{
		Zombie *bombies = zombieHorde(ZOMBIE_NUM, "bombie");

		for (int i = 0; i < ZOMBIE_NUM; i++){
			std::cout << bombies[i].getName() << "[" << i << "] ";
			bombies[i].announce();
		}
		delete [] bombies;
	}
	{
		Zombie *mombi = zombieHorde(-1, "mombi");
		delete [] mombi;
	}
	return 0;
}
