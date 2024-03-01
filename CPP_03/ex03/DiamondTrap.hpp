/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:43:48 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:54:54 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

#define DEFAULT_NAME_DIAMOND "Default Diamond"

class DiamondTrap : public ScavTrap, public FragTrap{
	private:
		std::string	_name;
	public:
		// Ortodox Cannonial Form
		DiamondTrap(void);
		DiamondTrap(const DiamondTrap &obj);
		DiamondTrap &operator=(const DiamondTrap &obj);
		~DiamondTrap(void);

		// ------------- Special Constructor -------------
		DiamondTrap(const std::string &name);
		// Member functons
		void	whoAmI(void);
		// using parent's attack function
		using ScavTrap::attack;

		// Getter
		std::string	get_Name(void) const;
		// Setter
		void		set_Name(const std::string &name);
};
#endif
