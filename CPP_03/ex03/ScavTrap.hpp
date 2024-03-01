/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 18:37:54 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 12:49:37 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

#define SCAV_HP 100
#define SCAV_EP 50
#define SCAV_AD 20
#define DEFAULT_NAME_SCAV "default scav"

class ScavTrap : virtual public ClapTrap{
	public:
		// Ortodox Cannonial Form
		ScavTrap();
		ScavTrap(const ScavTrap &scav);
		ScavTrap &operator=(const ScavTrap &scav);
		~ScavTrap();
		// ------------- Special Constructor -------------
		ScavTrap(const std::string &name);
		void	attack(std::string const &target);
		// ------------- Member functons -------------
		void	guardGate();
};

#endif
