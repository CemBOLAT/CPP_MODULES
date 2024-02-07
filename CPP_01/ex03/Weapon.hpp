/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 21:49:00 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 14:33:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon{
	private:
		std::string	type;
	public:
		Weapon(std::string name);
		~Weapon();

		std::string	getType(void);
		void		setType(std::string type);
};

#endif
