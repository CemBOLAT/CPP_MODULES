/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aanimal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 17:11:01 by cbolat            #+#    #+#             */
/*   Updated: 2023/10/07 17:20:26 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AAANIMAL_HPP
# define AAANIMAL_HPP

#include <iostream>

class Aanimal{
	protected:
		std::string	type;
	public:
		Aanimal();
		virtual ~Aanimal();
		Aanimal(const Aanimal &obj);
		Aanimal		&operator=(const Aanimal &obj);
		void		setType(std::string type);
		std::string	getType(void) const;
		virtual void makeSound(void) const = 0;

};

#endif
