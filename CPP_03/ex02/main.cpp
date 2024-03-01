/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:40:59 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/16 17:35:47 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(){
	FragTrap frag("Frag");

	frag.attack("target");
	frag.takeDamage(10);
	frag.takeDamage(110);
	frag.beRepaired(10);
	frag.highFivesGuys();

	return (0);
}
