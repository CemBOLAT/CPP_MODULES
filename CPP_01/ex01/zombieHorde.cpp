/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:07:08 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 13:39:30 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


Zombie	*zombieHorde(int N, std::string name){
	if (N <= 0)
		return NULL;
	Zombie *zombie = new Zombie[N];
	for (int i = 0; i < N; i++){
		zombie[i].setName(name);
	}
	return zombie;
}
