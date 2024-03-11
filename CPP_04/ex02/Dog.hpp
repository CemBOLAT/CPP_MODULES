/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:17:04 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/12 18:26:27 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef DOG_HPP
# define DOG_HPP

# include "AAnimal.hpp"
# include "Brain.hpp"

class Dog : public AAnimal{
	private:
		Brain	*brain;
	public :
		Dog();
		~Dog();
		Dog(const Dog &obj);
		Dog &operator=(const Dog &obj);
		void makeSound(void) const;
};

#endif
