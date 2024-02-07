/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 22:14:38 by cbolat            #+#    #+#             */
/*   Updated: 2024/02/07 20:37:22 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "./Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;
	public:
		HumanB(std::string name);

		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);
		Weapon	*getWeapon();
};

#endif



