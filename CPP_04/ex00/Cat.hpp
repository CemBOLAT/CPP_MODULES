/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:16:29 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:08:33 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
class Cat : public Animal{
	public :
		// 	Orthodox canonical class form
		Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		~Cat();
		// 	Member functions
		void makeSound(void) const;

};

#endif
