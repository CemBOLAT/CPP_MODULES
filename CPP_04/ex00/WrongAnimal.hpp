/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:50:08 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:10:06 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
	protected:
		std::string	type;
	public:
		// 	Orthodox canonical class form
		WrongAnimal();
		WrongAnimal(const WrongAnimal &obj);
		WrongAnimal		&operator=(const WrongAnimal &obj);
		virtual			~WrongAnimal();

		void			setType(std::string type);
		std::string		getType(void) const;
		void			makeSound(void) const; // different from Animal

};

# endif
