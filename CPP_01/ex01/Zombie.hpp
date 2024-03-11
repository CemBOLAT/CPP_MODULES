/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 18:32:40 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/15 13:23:07 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# define ZOMBIE_NUM 5
# include <iostream>

class Zombie{
	private :
		std::string name;
	public :
		Zombie(const std::string &name);
		Zombie();
		void	announce();
		~Zombie();
		void	setName(const std::string &name);
		std::string	getName() const ;
};

Zombie	*newZombie(const std::string &name);
Zombie	*zombieHorde(int N, std::string name);

#endif
