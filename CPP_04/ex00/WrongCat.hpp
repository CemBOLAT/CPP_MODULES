/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:49:23 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:10:29 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #ifndef WRONGCAT_HPP
 # define WRONGCAT_HPP

 # include "WrongAnimal.hpp"

 class WrongCat : public WrongAnimal{
 	public :
		// 	Orthodox canonical class form
 		WrongCat();
 		WrongCat(const WrongCat &obj);
 		WrongCat	&operator=(const WrongCat &obj);
 		~WrongCat();
		// 	Member functions
 		void	makeSound(void) const;
 };

 #endif
