/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:11:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:12:03 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		// 	Orthodox canonical class form
		Animal();
		Animal(const Animal &obj);
		Animal		&operator=(const Animal &obj);
		virtual ~Animal();
		// 	Setters and getters
		void		setType(std::string type);
		std::string	getType(void) const;
		// 	Member functions
		virtual void makeSound(void) const;

};

#endif
