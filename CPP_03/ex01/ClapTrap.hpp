/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 17:47:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 14:31:29 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

# define CLAP_HP 10
# define CLAP_EP 10
# define CLAP_AD 0
# define DEFAULT_NAME "default"

class ClapTrap{
	private:
		std::string	name;
		int			hitPoint;
		int			energyPoint;
		int			attackDamage;
	public:
		// Ortodox Cannonial Form
		ClapTrap();
		ClapTrap(const ClapTrap &clap);
		ClapTrap &operator=(const ClapTrap &clap);
		~ClapTrap();

		// ------------- Special Constructor -------------
		ClapTrap(const std::string &name);
		// ------------- Special Constructor-------------
		ClapTrap(const std::string &name, int hitPoint, int energyPoint, int attackDamage);
		// ------------- Member method -------------
		virtual void	attack(std::string const & target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);

		// ------------- Encapsulation -------------

		// Getter
		std::string	getName(void) const;
		int			getHitPoint(void) const;
		int			getEnergyPoint(void) const;
		int			getAttackDamage(void) const;
		// Setter
		void		setName(const std::string &name);
		void		setHitPoint(int hitPoint);
		void		setEnergyPoint(int energyPoint);
		void		setAttackDamage(int attackDamage);
		void		setAll(const std::string &name, int hitPoint, int energyPoint, int attackDamage);
};

# endif
