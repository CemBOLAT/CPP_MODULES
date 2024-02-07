/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:48:49 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 16:19:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"
#include "./HumanA.hpp"
#include "./HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	std::cout << "---------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	std::cout << "---------------------" << std::endl;
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		jim.attack();
		bob.attack();
	}
	return 0;
}
