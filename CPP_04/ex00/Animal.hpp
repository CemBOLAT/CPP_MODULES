/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:11:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 16:49:29 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		// Orthodox Cannonical Form
		Animal();
		Animal(const Animal &obj);
		Animal			&operator=(const Animal &obj);
		virtual			~Animal();

		// Getter - Setter
		void			setType(std::string type);
		std::string		getType(void) const;
		// Member Function
		virtual void	makeSound(void) const;

};

#endif
