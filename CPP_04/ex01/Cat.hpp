/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:16:29 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/12 18:05:04 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private :
		Brain	*brain;
	public :
		Cat();
		~Cat();
		Cat(const Cat &obj);
		Cat &operator=(const Cat &obj);
		void makeSound(void) const;

};

#endif
