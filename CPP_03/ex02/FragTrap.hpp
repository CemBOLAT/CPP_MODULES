/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 20:20:05 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/16 17:51:52 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

# define FRAG_HP 100
# define FRAG_EP 100
# define FRAG_AD 30
# define DEFAULT_NAME_FRAG "default frag"

class FragTrap : public ClapTrap
{
	public:
		// Ortodox Cannonial Form
		FragTrap();
		FragTrap(const FragTrap &frag);
		FragTrap &operator=(const FragTrap &frag);
		~FragTrap();

		// ------------- Special Constructor -------------
		FragTrap(const std::string &name);
		// Member functons
		void highFivesGuys(void);
};

#endif
