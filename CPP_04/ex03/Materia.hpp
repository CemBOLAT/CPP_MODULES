/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materia.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbolat <cbolat@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:50:41 by cbolat            #+#    #+#             */
/*   Updated: 2023/09/22 13:52:38 by cbolat           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIA_HPP

# define MATERIA_HPP

#include "AMateria.hpp"
#include <iostream>

class Materia : public AMateria
{
	public:
		Materia();
		Materia(std::string const & type);
		Materia(Materia const & src);
		Materia & operator=(Materia const & rhs);
};

#endif
