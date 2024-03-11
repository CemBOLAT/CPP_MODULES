/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:40 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/18 13:31:02 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private :
		std::string name;
	public :
		Zombie(const std::string &name);
		~Zombie();
		void	announce();
};

Zombie	*newZombie(const std::string &name);
void	randomChump(const std::string &name);

#endif
