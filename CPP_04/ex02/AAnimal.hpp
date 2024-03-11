/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:11:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:20:26 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal{
	protected:
		std::string	type;
	public:
		AAnimal();
		virtual ~AAnimal();
		AAnimal(const AAnimal &obj);
		AAnimal		&operator=(const AAnimal &obj);
		void		setType(std::string type);
		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;

};

#endif
